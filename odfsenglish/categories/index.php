<style>
    #categoryAccordion button.btn.btn-block.text-left.font-weight-bolder:focus {
        box-shadow: none !important;
    }
    #search-field .form-control.rounded-pill{
        border-top-right-radius:0 !important;
        border-bottom-right-radius:0 !important;
        border-right:none !important
    }
    #search-field .form-control:focus{
        box-shadow:none !important;
    }
    #search-field .form-control:focus + .input-group-append .input-group-text{
        border-color: #86b7fe !important
    }
    #search-field .input-group-text.rounded-pill{
        border-top-left-radius:0 !important;
        border-bottom-left-radius:0 !important;
        border-right:left !important
    }
</style>
<div class="section py-5">
    <div class="container">
        <h3 class="text-center"><b>Topics and Categories</b></h3>
        <hr>
        <div class="row justify-content-center">
            <div class="col-lg-8 col-md-10 col-sm-12 col-sm-12 mb-3">
                <div class="input-group input-group-lg" id="search-field">
                    <input type="search" class="form-control form-control-lg  rounded-pill" aria-label="Search Category Field" id="search" placeholder="search for a category here">
                    <div class="input-group-append">
                        <span class="input-group-text rounded-pill bg-transparent"><i class="fa fa-search"></i></span>
                    </div>
                </div>
            </div>
        </div>
        <div class="accordion" id="categoryAccordion">
            <?php 
            $categorys = $conn->query("SELECT * FROM `category_list` where delete_flag = 0 and `status` = 1 order by `name` asc");
            while($row = $categorys->fetch_assoc()):
            ?>
            <div class="card mb-0 rounded-0">
                <div class="card-header" id="category<?= $row['id'] ?>">
                    <h2 class="mb-0">
                        <button class="btn btn-block text-left font-weight-bolder" type="button" data-toggle="collapse" data-target="#collapse<?= $row['id'] ?>" aria-expanded="false" aria-controls="collapse<?= $row['id'] ?>">
                        <div class="d-flex w-100 align-items-center justify-content-between">
                            <?= $row['name'] ?>
                            <i class="fa fa-plus font-size-3 collapse-icon"></i>
                        </div>
                        </button>
                    </h2>
                </div>
                <div id="collapse<?= $row['id'] ?>" class="collapse category_collapse" aria-labelledby="category<?= $row['id'] ?>" data-parent="#categoryAccordion">
                    <div class="card-body">
                        <p><?= str_replace(["\n\r","\n","\r"], "<br/>", $row['description']) ?></p>
                    </div>
                </div>
            </div>
            <?php endwhile; ?>
        </div>
    </div>
</div>
<script>
    $(function(){
        $('.category_collapse').on('show.bs.collapse',function(){
            var card = $(this).closest('.card')
            var icon = card.find('.collapse-icon')
            icon.removeClass('fa-plus').addClass('fa-minus')
        })
        $('.category_collapse').on('hide.bs.collapse',function(){
            var card = $(this).closest('.card')
            var icon = card.find('.collapse-icon')
            icon.removeClass('fa-minus').addClass('fa-plus')
        })
        $('#search').on('input', function(){
            var _search = $(this).val().toLowerCase()
            $('#categoryAccordion .card').each(function(){
                var _text = $(this).text().toLowerCase()
                _text = _text.trim()
                if(_text.includes(_search) === false){
                    $(this).toggle(false)
                }else{
                    $(this).toggle(true)
                }
            })
        })
    })
</script>