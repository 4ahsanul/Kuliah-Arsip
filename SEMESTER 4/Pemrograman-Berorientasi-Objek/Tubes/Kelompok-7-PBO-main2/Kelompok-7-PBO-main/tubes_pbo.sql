-- phpMyAdmin SQL Dump
-- version 5.0.3
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Waktu pembuatan: 30 Jul 2021 pada 01.47
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
-- Database: `tubes_pbo`
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
  `email` varchar(255) NOT NULL,
  `password` varchar(50) NOT NULL,
  `status` varchar(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data untuk tabel `guru`
--

INSERT INTO `guru` (`id`, `nama`, `jk`, `noHp`, `email`, `password`, `status`) VALUES
('  101', '  Rahayu', '  Perempuan', '  08776', '  rahayu1@mail', '123', 'Guru'),
('  102', '  Tarjono', '  Laki-laki', '  081236', '  joko112', '123', 'Guru');

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
('89077', 'Coba', 'Bahasa Jawa'),
('54643', 'coba2', 'Matematika'),
('BI115', 'Quiz1', 'Bahasa Indonesia'),
('1234', 'Quiz1', 'Matematika'),
('SB2', 'Quiz2', 'Seni Budaya dan Keterampilan');

-- --------------------------------------------------------

--
-- Struktur dari tabel `question`
--

CREATE TABLE `question` (
  `id` int(11) NOT NULL,
  `judulkuis` varchar(255) NOT NULL,
  `kodekuis` varchar(50) NOT NULL,
  `mapel` varchar(50) NOT NULL,
  `soal` varchar(255) NOT NULL,
  `optA` varchar(200) NOT NULL,
  `optB` varchar(200) NOT NULL,
  `optC` varchar(200) NOT NULL,
  `optD` varchar(200) NOT NULL,
  `answer` varchar(200) NOT NULL,
  `score` varchar(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data untuk tabel `question`
--

INSERT INTO `question` (`id`, `judulkuis`, `kodekuis`, `mapel`, `soal`, `optA`, `optB`, `optC`, `optD`, `answer`, `score`) VALUES
(1, 'Latihan 5', '12345', 'Seni Budaya', 'Apa itu NFT?', 'Non Fungible Token', 'Non Fisible Token', 'Non Fisik Token', 'Non Fungible Transfer', 'Non Fungible Token', '10'),
(2, 'Latihan 5', '12345', 'Seni Budaya', 'Apa itu NFT?', 'Non Fungible Token', 'Non Fisible Token', 'Non Fisik Token', 'Non Fungible Transfer', 'Non Fungible Token', '10'),
(3, 'Latihan 5', '12345', 'Seni Budaya', 'Apa itu NFT?', 'Non Fungible Token', 'Non Fisible Token', 'Non Fisik Token', 'Non Fungible Transfer', 'Non Fungible Token', '10');

-- --------------------------------------------------------

--
-- Struktur dari tabel `siswa`
--

CREATE TABLE `siswa` (
  `id` varchar(11) NOT NULL,
  `nama` varchar(255) NOT NULL,
  `jk` varchar(50) NOT NULL,
  `noHp` varchar(50) NOT NULL,
  `email` varchar(50) NOT NULL,
  `password` varchar(50) NOT NULL,
  `status` varchar(50) NOT NULL,
  `score` varchar(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data untuk tabel `siswa`
--

INSERT INTO `siswa` (`id`, `nama`, `jk`, `noHp`, `email`, `password`, `status`, `score`) VALUES
('  12344', '  Budi', '  Laki-laki', '  0123', '  budi1@mail', '123', 'Siswa', ''),
('  12345', '  Eko Yanuarso Budi', '  Laki-Laki', '  085712345', '  ekoyanu@mail.com', '123', 'Siswa', '');

--
-- Indexes for dumped tables
--

--
-- Indeks untuk tabel `guru`
--
ALTER TABLE `guru`
  ADD PRIMARY KEY (`id`);

--
-- Indeks untuk tabel `question`
--
ALTER TABLE `question`
  ADD PRIMARY KEY (`id`);

--
-- Indeks untuk tabel `siswa`
--
ALTER TABLE `siswa`
  ADD PRIMARY KEY (`id`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
