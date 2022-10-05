<?php 
$user = $conn->query("SELECT * FROM users where id ='".$_settings->userdata('id')."'");
foreach($user->fetch_array() as $k =>$v){
    if(!is_numeric($k))
        $$k = $v;
}
?>
<section class="py-4">
	<div class="container">
		<div class="card card-outline rounded-0 card-navy">
			<div class="card-header">
				<h4 class="font-weight-bolder">Update user details </h4>
			</div>
			<div class="card-body">
				<div class="container-fluid">
					<div id="msg"></div>
					<form action="" id="manage-user">	
						<input type="hidden" name="id" value="<?= isset($id) ? $id : '' ?>">
						<input type="hidden" name="type" value="2">
						<div class="row">
							<div class="col-lg-6 col-md-6 col-sm-12 col-xs-12">
								<div class="form-group">
									<label for="firstname" class="control-label">First Name</label>
									<input type="text" class="form-control form-control-sm rounded-0" reqiured="" name="firstname" id="firstname" value="<?= isset($firstname) ? $firstname : "" ?>">
								</div>
								<div class="form-group">
									<label for="middlename" class="control-label">Middle Name</label>
									<input type="text" class="form-control form-control-sm rounded-0" name="middlename" id="middlename" value="<?= isset($middlename) ? $middlename : "" ?>">
								</div>
								<div class="form-group">
									<label for="lastname" class="control-label">Last Name</label>
									<input type="text" class="form-control form-control-sm rounded-0" reqiured="" name="lastname" id="lastname" value="<?= isset($lastname) ? $lastname : "" ?>">
								</div>
							</div>
							<div class="col-lg-6 col-md-6 col-sm-12 col-xs-12">
								<div class="form-group">
									<label for="username" class="control-label">Username</label>
									<input type="text" class="form-control form-control-sm rounded-0" reqiured="" name="username" id="username" value="<?= isset($username) ? $username : "" ?>">
								</div>
								<div class="form-group">
									<label for="password" class="control-label">New Password</label>
									<div class="input-group input-group-sm">
										<input type="password" class="form-control form-control-sm rounded-0" name="password" id="password">
										<button tabindex="-1" class="btn btn-outline-secondary btn-sm rounded-0 pass_view" type="button"><i class="fa fa-eye-slash"></i></button>
									</div>
								</div>
								<div class="form-group">
									<label for="cpassword" class="control-label">Confirm New Password</label>
									<div class="input-group input-group-sm">
										<input type="password" class="form-control form-control-sm rounded-0" id="cpassword">
										<button tabindex="-1" class="btn btn-outline-secondary btn-sm rounded-0 pass_view" type="button"><i class="fa fa-eye-slash"></i></button>
									</div>
								</div>
								<small class="text-muted"><i>If you do not wish to change your password leave the password space empty.</i></small>
							</div>
							<div class="col-lg-6 col-md-6 col-sm-12 col-xs-12">
								<div class="form-group">
									<label for="" class="control-label">Avatar</label>
									<div class="custom-file">
										<input type="file" class="custom-file-input rounded-0" id="customFile" name="img" onchange="displayImg(this,$(this))" accept="image/png, image/jpeg">
										<label class="custom-file-label rounded-0" for="customFile">Choose file</label>
									</div>
								</div>
							</div>
							<div class="col-lg-6 col-md-6 col-sm-12 col-xs-12">
								<div class="form-group d-flex justify-content-center">
									<img src="<?php echo validate_image(isset($avatar) ? $avatar :'') ?>" alt="" id="cimg" class="img-fluid img-thumbnail">
								</div>
							</div>
						</div>
					</form>
				</div>
			</div>
			<div class="card-footer py-1 text-center">
				<button class="btn btn-sm btn-primary btn-sm btn-flat" form="manage-user">Update</button>
			</div>
		</div>
	</div>
</section>
<style>
	img#cimg{
		height: 15vh;
		width: 15vh;
		object-fit: cover;
		border-radius: 100% 100%;
	}
</style>
<script>
	function displayImg(input,_this) {
	    if (input.files && input.files[0]) {
	        var reader = new FileReader();
	        reader.onload = function (e) {
	        	$('#cimg').attr('src', e.target.result);
	        }

	        reader.readAsDataURL(input.files[0]);
	    }else{
			$('#cimg').attr('src', "<?php echo validate_image(isset($avatar) ? $avatar :'') ?>");
		}
	}
	$(function(){
		$('.pass_view').click(function(){
			var input = $(this).siblings('input')
			var type = input.attr('type')
			if(type == 'password'){
				$(this).html('<i class="fa fa-eye"></i>')
				input.attr('type','text').focus()
			}else{
				$(this).html('<i class="fa fa-eye-slash"></i>')
				input.attr('type','password').focus()
			}
		})
		$('#manage-user').submit(function(e){
			e.preventDefault()
			var _this = $(this)
			var el = $('<div>')
				el.addClass('alert alert-danger err_msg')
				el.hide()
			$('.err_msg').remove()
			if($('#password').val() != $('#cpassword').val()){
				el.text('Password does not match')
				_this.prepend(el)
				el.show('slow')
				$('html, body').scrollTop(0)
				return false;
			}
			if(_this[0].checkValidity() == false){
				_this[0].reportValidity();
				return false;
			}
			start_loader()
			$.ajax({
				url:_base_url_+"classes/Users.php?f=registration",
				method:'POST',
				type:'POST',
				data:new FormData($(this)[0]),
				dataType:'json',
				cache:false,
				processData:false,
				contentType: false,
				error:err=>{
					console.log(err)
					alert('An error occurred')
					end_loader()
				},
				success:function(resp){
					if(resp.status == 'success'){
					location.reload()
					}else if(!!resp.msg){
						el.html(resp.msg)
						el.show('slow')
						_this.prepend(el)
						$('html, body').scrollTop(0)
					}else{
						alert('An error occurred')
						console.log(resp)
					}
					end_loader()
				}
			})
		})
	})

</script>