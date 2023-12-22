-- phpMyAdmin SQL Dump
-- version 5.0.3
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Waktu pembuatan: 30 Jul 2021 pada 02.08
-- Versi server: 10.4.14-MariaDB
-- Versi PHP: 7.4.11

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `quiz`
--

-- --------------------------------------------------------

--
-- Struktur dari tabel `guru`
--

CREATE TABLE `guru` (
  `id` varchar(11) NOT NULL,
  `nama` varchar(255) NOT NULL,
  `jk` varchar(50) NOT NULL,
  `noHp` varchar(50) NOT NULL,
  `username` varchar(255) NOT NULL,
  `password` varchar(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data untuk tabel `guru`
--

INSERT INTO `guru` (`id`, `nama`, `jk`, `noHp`, `username`, `password`) VALUES
('  101', '  Rahayu', '  Perempuan', '  08776', '  rahayu1@mail', '123'),
('  123', '  Priya', '  Laki-Laki', '  082313782937', 'priya@gmail.ecom  ', '456'),
('102', 'Agung', 'Laki-Laki', '0821353124153', 'agung', '321'),
('12346', 'Yanuarso  ', 'Laki-Laki', '0857324', 'ekoyanu@mail', '123'),
('12366', 'Joko', 'Laki-laki', '08776', 'joko123@mail', '123'),
('coba', 'coba', 'L', '0776', 'ekocoba@mail', '123'),
('fix', 'fix', 'fix', 'fix  ', 'fix  ', 'fix');

-- --------------------------------------------------------

--
-- Struktur dari tabel `kuis`
--

CREATE TABLE `kuis` (
  `kodekuis` varchar(50) NOT NULL,
  `judulkuis` varchar(255) NOT NULL,
  `mapel` varchar(255) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data untuk tabel `kuis`
--

INSERT INTO `kuis` (`kodekuis`, `judulkuis`, `mapel`) VALUES
('1234', 'Quiz1', 'Matematika'),
('54643', 'coba2', 'Matematika'),
('89077', 'Coba', 'Bahasa Jawa'),
('BI115', 'Quiz1', 'Bahasa Indonesia'),
('SB2', 'Quiz2', 'Seni Budaya dan Keterampilan');

-- --------------------------------------------------------

--
-- Struktur dari tabel `question`
--

CREATE TABLE `question` (
  `id` int(11) NOT NULL,
  `mapel` varchar(50) NOT NULL,
  `soal` varchar(255) NOT NULL,
  `optA` varchar(200) NOT NULL,
  `optB` varchar(200) NOT NULL,
  `optC` varchar(200) NOT NULL,
  `optD` varchar(200) NOT NULL,
  `answer` varchar(200) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data untuk tabel `question`
--

INSERT INTO `question` (`id`, `mapel`, `soal`, `optA`, `optB`, `optC`, `optD`, `answer`) VALUES
(1, 'Matematika', 'Salah satu metode Matematika', 'Mamalia', 'Subtitusi', 'Ovipar', 'Ovovivipar', 'Subtitusi'),
(2, 'Matematika', '1+2', '3', '4', '5', '2', '3'),
(3, 'Matematika', '25x3', '45', '50', '75', '65', '75'),
(4, 'Matematika', '1+1', '3', '4', '5', '2', '2'),
(5, 'Matematika', '2x2', '2', '1', '3', '4', '4'),
(6, 'Matematika', '5+5', '5', '6', '7', '10', '10'),
(7, 'Matematika', '7x2', '8', '10', '14', '24', '14'),
(8, 'Matematika', '23-2', '20', '21', '22', '23', '21'),
(9, 'Matematika', '3x3', '6', '9', '2', '1', '9'),
(10, 'Matematika', '10-x = 7', '1', '2', '3', '4', '3');

-- --------------------------------------------------------

--
-- Struktur dari tabel `siswa`
--

CREATE TABLE `siswa` (
  `nama` varchar(50) NOT NULL,
  `jk` varchar(50) NOT NULL,
  `nip` varchar(50) NOT NULL,
  `email` varchar(50) NOT NULL,
  `marks` int(10) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data untuk tabel `siswa`
--

INSERT INTO `siswa` (`nama`, `jk`, `nip`, `email`, `marks`) VALUES
('Eko Yanuarso Budi', 'Laki', '1145', 'eko@mail', 90);

--
-- Indexes for dumped tables
--

--
-- Indeks untuk tabel `guru`
--
ALTER TABLE `guru`
  ADD PRIMARY KEY (`id`);

--
-- Indeks untuk tabel `kuis`
--
ALTER TABLE `kuis`
  ADD PRIMARY KEY (`kodekuis`);

--
-- Indeks untuk tabel `question`
--
ALTER TABLE `question`
  ADD PRIMARY KEY (`id`);

--
-- Indeks untuk tabel `siswa`
--
ALTER TABLE `siswa`
  ADD PRIMARY KEY (`nip`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
