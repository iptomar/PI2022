-- phpMyAdmin SQL Dump
-- version 5.1.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Oct 03, 2022 at 04:31 PM
-- Server version: 10.4.22-MariaDB
-- PHP Version: 8.1.1

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `odfsenglish_db`
--

-- --------------------------------------------------------

--
-- Table structure for table `category_list`
--

CREATE TABLE `category_list` (
  `id` int(30) NOT NULL,
  `name` text NOT NULL,
  `description` text NOT NULL,
  `status` tinyint(1) NOT NULL DEFAULT 1,
  `delete_flag` tinyint(1) NOT NULL DEFAULT 0,
  `date_created` datetime NOT NULL DEFAULT current_timestamp(),
  `date_updated` datetime NOT NULL DEFAULT current_timestamp() ON UPDATE current_timestamp()
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `category_list`
--

INSERT INTO `category_list` (`id`, `name`, `description`, `status`, `delete_flag`, `date_created`, `date_updated`) VALUES
(1, 'PHP', 'PHP is an open-source server-side scripting language that many devs use for web development. It is also a general-purpose language that you can use to make lots of projects, including Graphical User Interfaces (GUIs).', 1, 1, '2022-05-16 10:02:41', '2022-09-26 10:33:24'),
(2, 'VB.NET', 'Visual Basic, originally called Visual Basic .NET, is a multi-paradigm, object-oriented programming language, implemented on .NET, Mono, and the .NET Framework. Microsoft launched VB.NET in 2002 as the successor to its original Visual Basic language.', 1, 1, '2022-05-16 10:03:27', '2022-09-26 10:33:32'),
(3, 'Python', 'Python is a high-level, interpreted, general-purpose programming language. Its design philosophy emphasizes code readability with the use of significant indentation. Python is dynamically-typed and garbage-collected.', 1, 1, '2022-05-16 10:03:48', '2022-09-26 10:33:29'),
(4, 'JavaScript', 'JavaScript, often abbreviated JS, is a programming language that is one of the core technologies of the World Wide Web, alongside HTML and CSS. Over 97% of websites use JavaScript on the client side for web page behavior, often incorporating third-party libraries.', 1, 1, '2022-05-16 10:04:11', '2022-09-26 10:33:19'),
(5, 'test', 'test', 1, 1, '2022-05-16 10:04:54', '2022-05-16 10:04:59'),
(6, 'Geral', '', 1, 0, '2022-09-26 10:20:21', '2022-09-26 10:20:21'),
(7, 'Editor', '', 1, 0, '2022-09-26 10:20:59', '2022-09-26 10:20:59'),
(8, 'Linguagem', '', 1, 0, '2022-09-26 10:22:08', '2022-09-26 10:22:08'),
(9, 'Cálculo computacional', '', 1, 0, '2022-09-26 10:22:44', '2022-09-26 10:22:44'),
(10, 'Desisões', '', 1, 0, '2022-09-26 10:23:38', '2022-09-26 10:23:38'),
(11, 'Repetições', '', 1, 0, '2022-09-26 10:23:53', '2022-09-26 10:23:53'),
(12, 'Módulos', '', 1, 0, '2022-09-26 10:24:16', '2022-09-26 10:24:16');

-- --------------------------------------------------------

--
-- Table structure for table `comment_list`
--

CREATE TABLE `comment_list` (
  `id` int(30) NOT NULL,
  `user_id` int(30) NOT NULL,
  `post_id` int(30) NOT NULL,
  `comment` text NOT NULL,
  `date_created` datetime NOT NULL DEFAULT current_timestamp()
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `comment_list`
--

INSERT INTO `comment_list` (`id`, `user_id`, `post_id`, `comment`, `date_created`) VALUES
(1, 4, 2, 'Test Comment 123', '2022-05-16 12:05:21'),
(2, 4, 2, '<p>This is a sample comment only</p>', '2022-05-16 13:00:42'),
(4, 4, 3, '<p>test 123</p>', '2022-05-16 13:54:01');

-- --------------------------------------------------------

--
-- Table structure for table `post_list`
--

CREATE TABLE `post_list` (
  `id` int(30) NOT NULL,
  `user_id` int(30) NOT NULL,
  `category_id` int(30) NOT NULL,
  `title` text NOT NULL,
  `content` text NOT NULL,
  `status` tinyint(1) NOT NULL DEFAULT 0,
  `delete_flag` tinyint(1) NOT NULL DEFAULT 0,
  `date_created` datetime NOT NULL DEFAULT current_timestamp(),
  `date_updated` datetime NOT NULL DEFAULT current_timestamp() ON UPDATE current_timestamp()
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `post_list`
--

INSERT INTO `post_list` (`id`, `user_id`, `category_id`, `title`, `content`, `status`, `delete_flag`, `date_created`, `date_updated`) VALUES
(1, 4, 1, 'Sample Topic Title', '<p style=\"margin-right: 0px; margin-bottom: 15px; margin-left: 0px; padding: 0px; text-align: justify; color: rgb(0, 0, 0); font-family: \"Open Sans\", Arial, sans-serif; font-size: 14px;\">Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur fringilla bibendum urna ac eleifend. Quisque in est eu ipsum blandit accumsan ultrices nec tortor. Aliquam lacinia, ex sit amet iaculis sollicitudin, urna odio tempor nulla, eu lacinia augue mi a felis. Quisque finibus in arcu sed ultricies. Duis eleifend metus consectetur vulputate bibendum. Interdum et malesuada fames ac ante ipsum primis in faucibus. Ut interdum libero vitae nisi finibus, non varius quam volutpat. Cras non iaculis neque. Integer bibendum sagittis dignissim. Ut aliquet suscipit velit sit amet hendrerit. Sed mattis pellentesque augue id bibendum. Phasellus quis justo ornare, faucibus arcu at, ullamcorper lectus.</p><p style=\"margin-right: 0px; margin-bottom: 15px; margin-left: 0px; padding: 0px; text-align: justify; color: rgb(0, 0, 0); font-family: \"Open Sans\", Arial, sans-serif; font-size: 14px;\">Nulla a nisl quis tellus volutpat lacinia. Nullam et eros ac mi dapibus ornare. Suspendisse sit amet purus mattis, ullamcorper nulla sit amet, euismod urna. Fusce ac pulvinar velit. Vivamus tellus nibh, pretium eu consectetur et, hendrerit eu elit. Proin et augue ultricies, euismod augue a, varius nibh. Donec condimentum justo erat, non cursus mi pharetra vel. Cras pretium nulla quis justo venenatis, vitae aliquet justo dapibus. Maecenas efficitur viverra tellus, vestibulum pharetra est dictum at. Aenean mauris tellus, luctus vitae odio sit amet, sagittis faucibus nisl. Aliquam in dignissim sapien, nec sagittis lorem. Donec facilisis vulputate purus vitae congue. Nunc eros risus, congue id nisi nec, hendrerit tristique sem. Phasellus sodales nunc arcu, nec ultricies tellus tincidunt et.</p>', 1, 0, '2022-05-16 11:13:02', '2022-05-16 13:57:01'),
(2, 4, 1, 'Topic 2 - Updated', '<p style=\"margin-right: 0px; margin-bottom: 15px; margin-left: 0px; padding: 0px; text-align: justify; color: rgb(0, 0, 0); font-family: \"Open Sans\", Arial, sans-serif; font-size: 14px;\">Quisque et commodo sem, sed aliquam justo. In varius erat purus, sit amet fermentum sapien semper sed. Quisque consequat blandit est eget gravida. Aliquam venenatis, libero eget hendrerit auctor, arcu dui interdum diam, ac hendrerit lacus eros ut sapien. Aenean commodo luctus metus eget vestibulum. Vestibulum nec convallis nulla, porttitor aliquet justo. In quis augue non ligula commodo tempus. Fusce ex ex, blandit sit amet lorem quis, pharetra aliquam leo. Mauris consequat vel mauris vitae consequat. Donec a enim ac erat malesuada varius non eget erat. Aliquam erat volutpat.</p><p style=\"margin-right: 0px; margin-bottom: 15px; margin-left: 0px; padding: 0px; text-align: justify; color: rgb(0, 0, 0); font-family: \"Open Sans\", Arial, sans-serif; font-size: 14px;\">Fusce quis nisi at libero sodales pretium. Proin interdum, nisl quis ornare malesuada, nisi erat vestibulum nisi, nec egestas leo orci vel mauris. Ut quis varius orci. Vivamus nec vulputate purus. Sed ut magna euismod, accumsan arcu non, sagittis purus. Ut tempor elit at scelerisque eleifend. Morbi pharetra est in nibh eleifend, nec sagittis orci posuere. In malesuada, libero sit amet rutrum accumsan, quam leo ultricies augue, a maximus leo massa sit amet diam. Nunc dictum orci dui, vitae condimentum ex porta in. Ut sodales posuere mollis. Sed at sem pellentesque ligula commodo blandit. Ut sem velit, vulputate at porttitor vel, rutrum sit amet velit. Nunc ultrices, felis lacinia lobortis pharetra, purus quam porta massa, sed hendrerit arcu mi in magna. In dignissim urna sit amet mi pharetra, eu molestie libero rhoncus. Sed sit amet ipsum accumsan libero ullamcorper egestas.</p><p style=\"margin-right: 0px; margin-bottom: 15px; margin-left: 0px; padding: 0px; text-align: justify; color: rgb(0, 0, 0); font-family: \"Open Sans\", Arial, sans-serif; font-size: 14px;\">Aliquam et tincidunt eros. Pellentesque ut luctus leo, nec fermentum velit. Vestibulum a justo et ligula hendrerit laoreet vitae et nunc. Pellentesque commodo dignissim justo, rutrum dictum est euismod vel. Interdum et malesuada fames ac ante ipsum primis in faucibus. Nunc convallis arcu nec ullamcorper gravida. Phasellus ullamcorper nisi euismod tellus convallis, a aliquet ex commodo. Vivamus cursus elit purus, eu tristique lorem congue nec. Suspendisse tincidunt commodo purus, eget pharetra ipsum.</p><p style=\"margin-right: 0px; margin-bottom: 15px; margin-left: 0px; padding: 0px; text-align: justify; color: rgb(0, 0, 0); font-family: \"Open Sans\", Arial, sans-serif; font-size: 14px;\">Morbi cursus tincidunt ex vel elementum. Suspendisse et suscipit quam, vel interdum elit. Nullam mollis massa nisi, id consectetur nibh sodales vel. Pellentesque lobortis dignissim odio, vitae hendrerit dolor sollicitudin sit amet. Suspendisse ut leo id ex interdum ornare eget eu ex. Fusce laoreet erat in leo venenatis scelerisque. Aliquam laoreet sem ipsum, ac euismod justo egestas a. Ut facilisis posuere ante, sit amet tincidunt augue pretium vitae. Curabitur ullamcorper venenatis felis, ac pharetra velit varius vitae. Quisque et dignissim orci. Mauris non felis nec ligula posuere dignissim. Vivamus semper lacinia magna sed mollis. Maecenas a euismod lectus.</p>', 1, 0, '2022-05-16 11:25:21', '2022-05-16 13:56:52'),
(3, 4, 2, 'test', '<p>Data to delete</p>', 1, 1, '2022-05-16 13:52:36', '2022-05-16 13:54:05'),
(4, 1, 1, 'test', '<p>test</p>', 1, 1, '2022-05-16 14:11:24', '2022-05-16 14:12:10'),
(5, 6, 4, 'if statment', '<p>as9duiojoaisjdoasmdad</p>', 1, 0, '2022-09-14 14:22:27', '2022-09-14 14:22:27'),
(6, 6, 7, 'ioahsdoiahjs', '<p>asdaoisduoasjdkpaskd</p>', 1, 0, '2022-09-28 14:06:26', '2022-09-28 14:06:57');

-- --------------------------------------------------------

--
-- Table structure for table `system_info`
--

CREATE TABLE `system_info` (
  `id` int(30) NOT NULL,
  `meta_field` text NOT NULL,
  `meta_value` text NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `system_info`
--

INSERT INTO `system_info` (`id`, `meta_field`, `meta_value`) VALUES
(1, 'name', 'Online Discussion Forum Site'),
(6, 'short_name', 'FORUM - ALGORITHMI'),
(11, 'logo', 'uploads/logo.png?v=1652665183'),
(13, 'user_avatar', 'uploads/user_avatar.jpg'),
(14, 'cover', 'uploads/cover.jpg?v=1652665183');

-- --------------------------------------------------------

--
-- Table structure for table `users`
--

CREATE TABLE `users` (
  `id` int(50) NOT NULL,
  `firstname` varchar(250) NOT NULL,
  `middlename` text DEFAULT NULL,
  `lastname` varchar(250) NOT NULL,
  `username` text NOT NULL,
  `password` text NOT NULL,
  `avatar` text DEFAULT NULL,
  `last_login` datetime DEFAULT NULL,
  `type` tinyint(1) NOT NULL DEFAULT 0,
  `date_added` datetime NOT NULL DEFAULT current_timestamp(),
  `date_updated` datetime DEFAULT current_timestamp() ON UPDATE current_timestamp()
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COMMENT='2';

--
-- Dumping data for table `users`
--

INSERT INTO `users` (`id`, `firstname`, `middlename`, `lastname`, `username`, `password`, `avatar`, `last_login`, `type`, `date_added`, `date_updated`) VALUES
(1, 'Adminstrator', '', 'Admin', 'admin', '0192023a7bbd73250516f069df18b500', 'uploads/avatars/1.png?v=1649834664', NULL, 1, '2021-01-20 14:02:37', '2022-05-16 14:17:49'),
(4, 'Mark', 'D', 'Cooper', 'mcooper', 'c7162ff89c647f444fcaa5c635dac8c3', 'uploads/avatars/4.png?v=1652667135', NULL, 2, '2022-05-16 10:12:15', '2022-05-16 13:44:49'),
(5, 'John', 'D', 'Smith', 'jsmith', '1254737c076cf867dc53d60a0364f38e', NULL, NULL, 2, '2022-05-16 14:19:03', '2022-05-16 14:19:03'),
(6, 'Carlos', 'Pedro', 'Silva', 'CarlosGaming', 'e10adc3949ba59abbe56e057f20f883e', 'uploads/avatars/6.png?v=1663931668', NULL, 2, '2022-09-14 14:21:42', '2022-09-28 14:05:09'),
(7, 'adminteste', '', '', 'adminteste', '40cb116d1ed49eaa4e12efe044d8924c', 'uploads/avatars/7.png?v=1664283524', NULL, 1, '2022-09-27 13:58:44', '2022-09-27 13:59:16'),
(8, 'joao', 'pedro', 'graca', 'joao', 'e10adc3949ba59abbe56e057f20f883e', NULL, NULL, 2, '2022-10-03 15:10:27', '2022-10-03 15:10:27');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `category_list`
--
ALTER TABLE `category_list`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `comment_list`
--
ALTER TABLE `comment_list`
  ADD PRIMARY KEY (`id`),
  ADD KEY `user_id` (`user_id`),
  ADD KEY `post_id` (`post_id`);

--
-- Indexes for table `post_list`
--
ALTER TABLE `post_list`
  ADD PRIMARY KEY (`id`),
  ADD KEY `user_id` (`user_id`),
  ADD KEY `category_id` (`category_id`);

--
-- Indexes for table `system_info`
--
ALTER TABLE `system_info`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `users`
--
ALTER TABLE `users`
  ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `category_list`
--
ALTER TABLE `category_list`
  MODIFY `id` int(30) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=13;

--
-- AUTO_INCREMENT for table `comment_list`
--
ALTER TABLE `comment_list`
  MODIFY `id` int(30) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=6;

--
-- AUTO_INCREMENT for table `post_list`
--
ALTER TABLE `post_list`
  MODIFY `id` int(30) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=7;

--
-- AUTO_INCREMENT for table `system_info`
--
ALTER TABLE `system_info`
  MODIFY `id` int(30) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=15;

--
-- AUTO_INCREMENT for table `users`
--
ALTER TABLE `users`
  MODIFY `id` int(50) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=9;

--
-- Constraints for dumped tables
--

--
-- Constraints for table `comment_list`
--
ALTER TABLE `comment_list`
  ADD CONSTRAINT `post_id_fk_cl` FOREIGN KEY (`post_id`) REFERENCES `post_list` (`id`) ON DELETE CASCADE ON UPDATE NO ACTION,
  ADD CONSTRAINT `user_id_fk_cl` FOREIGN KEY (`user_id`) REFERENCES `users` (`id`) ON DELETE CASCADE ON UPDATE NO ACTION;

--
-- Constraints for table `post_list`
--
ALTER TABLE `post_list`
  ADD CONSTRAINT `category_id_fk_tl` FOREIGN KEY (`category_id`) REFERENCES `category_list` (`id`) ON DELETE CASCADE ON UPDATE NO ACTION,
  ADD CONSTRAINT `user_id_fk_tl` FOREIGN KEY (`user_id`) REFERENCES `users` (`id`) ON DELETE CASCADE ON UPDATE NO ACTION;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
