-- phpMyAdmin SQL Dump
-- version 5.1.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Jul 15, 2021 at 09:26 AM
-- Server version: 10.4.19-MariaDB
-- PHP Version: 8.0.7

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `dbpbo`
--

-- --------------------------------------------------------

--
-- Table structure for table `bio`
--

CREATE TABLE `bio` (
  `namaL` varchar(50) NOT NULL,
  `namaP` varchar(50) NOT NULL,
  `email` varchar(50) NOT NULL,
  `jurusan` varchar(50) NOT NULL,
  `nisn` int(15) NOT NULL,
  `alamat` varchar(50) NOT NULL,
  `nohp` varchar(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `bio`
--

INSERT INTO `bio` (`namaL`, `namaP`, `email`, `jurusan`, `nisn`, `alamat`, `nohp`) VALUES
('Michael Purnomo', 'Mikey', 'nuclear@gmail,com', 'IPS', 123561, 'Cibaduyut', '+625471263421'),
('Sugeng Andiya', 'Andi', 'andi@gmail.com', 'MIPA', 125613, 'Demak', '+628291638216'),
('Putriyani Fatimah', 'Puput', 'putt@gmail.com', 'MIPA', 126399, 'Pasaraya', '+623374812147'),
('Gunawan Rendra', 'Gunawan', 'gun@gmail.com', 'IPS', 127343, 'Jatisawit', '+627318265411');

-- --------------------------------------------------------

--
-- Table structure for table `data`
--

CREATE TABLE `data` (
  `nama` varchar(50) NOT NULL,
  `email` varchar(50) NOT NULL,
  `nohp` varchar(50) NOT NULL,
  `nip` int(15) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `data`
--

INSERT INTO `data` (`nama`, `email`, `nohp`, `nip`) VALUES
('Abunawas', 'abu@gmail.com', '+6282136273918', 1926153),
('Yuli', 'yuli@gmail.com', '+62821726327', 1927371),
('Filfimo', 'filfimo@gmail.com', '+6282351621', 19102143);

-- --------------------------------------------------------

--
-- Table structure for table `login`
--

CREATE TABLE `login` (
  `username` varchar(30) NOT NULL,
  `password` varchar(30) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `login`
--

INSERT INTO `login` (`username`, `password`) VALUES
('abu', 'abu1'),
('yulfis', 'yulfis1'),
('yuli', 'yuliq');

-- --------------------------------------------------------

--
-- Table structure for table `nilai`
--

CREATE TABLE `nilai` (
  `no` int(15) NOT NULL,
  `nama` varchar(50) NOT NULL,
  `nilai` int(15) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `nilai`
--

INSERT INTO `nilai` (`no`, `nama`, `nilai`) VALUES
(1, 'Ali Budianto', 98),
(2, 'Febri Putriyani', 97),
(3, 'Kevin Wijaya', 96),
(4, 'Muhammad Fahri Trianto', 93);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `bio`
--
ALTER TABLE `bio`
  ADD PRIMARY KEY (`nisn`);

--
-- Indexes for table `data`
--
ALTER TABLE `data`
  ADD PRIMARY KEY (`nip`);

--
-- Indexes for table `login`
--
ALTER TABLE `login`
  ADD PRIMARY KEY (`username`);

--
-- Indexes for table `nilai`
--
ALTER TABLE `nilai`
  ADD PRIMARY KEY (`no`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
