-- phpMyAdmin SQL Dump
-- version 5.0.2
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Waktu pembuatan: 18 Jul 2021 pada 09.47
-- Versi server: 10.4.14-MariaDB
-- Versi PHP: 7.4.10

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `bukumase_6`
--

-- --------------------------------------------------------

--
-- Struktur dari tabel `tb_barang`
--

CREATE TABLE `tb_barang` (
  `id_brg` int(11) NOT NULL,
  `nama_brg` varchar(150) NOT NULL,
  `keterangan` varchar(200) NOT NULL,
  `kategori` varchar(100) NOT NULL,
  `harga` int(11) NOT NULL,
  `stok` int(11) NOT NULL,
  `gambar` text NOT NULL,
  `trial` text NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data untuk tabel `tb_barang`
--

INSERT INTO `tb_barang` (`id_brg`, `nama_brg`, `keterangan`, `kategori`, `harga`, `stok`, `gambar`, `trial`) VALUES
(1, 'Bumi', 'Bumi adalah buku karya tere liye', 'Novel', 98000, 20, 'bumi.jpg', 'Raib, seorang gadis berumur 15 tahun. Ia sama seperti remaja lainya. Kecuali satu hal, Sesuatu yang ia simpan sendiri sejak kecil. Sesuatu yang menakjubkan. Raib bisa menghilang. Cukup dengan menutup wajah dengan kedua tangan tubuhnya pun menghilang. Kekuatan aneh itu telah ada sejak ia masih kecil, bahkan sejak umur 2 tahun Raib suka sekali bermain petak umpat bersama orangtuanya. Raib meletakan kedua telapak tanganya di wajah, dan menghilang. Saat ulang tahunnya yang kesembilan, Raib mendapat hadiah 2 ekor kucing kembar entah dari siapa. Kedua kucing itu dia beri nama si Hitam dan si Putih.\r\n\r\n\r\nSeli merupakan sahabat sekaligus teman semeja Raib. Suatu hari, seli bertabrakan dengan Ali si Biang kerok, mereka bertengkar dan Raib dapat membereskan pertengkaran kecil itu. Saat pelajaran miss keriting alias miss selena, Raib dan Ali di hukum. Mereka tidak boleh mengikuti pelajaran matematika kala itu karena mereka tidak mengumpulkan tugas. Raib menutup wajahnya dan mengintip di sela jarinya, tiba-tiba seseorang dengan tubuh kurus tinggi entah datang darimana mengagetkanya. Sontak saja Ali melihat Raib yang tiba-tiba muncul dan menyudutkan Raib dengan segala pertanyaan. Ali juga memasang beberapa alat buatannya disekolah dan tasku untuk mengetahui suatu hal yang membuatnya penasaran itu.\r\n\r\nHari itu Sepulang sekolah.Setelah sampai di rumah, hanya si Putih yang menyambut Raib. Raib tak melihat si Hitam. Padahal si Hitam dan si Putih selalu bermain dan pergi ke mana-mana bersama, termasuk menyambut ketika Raib sampai di rumah. Beberapa hari kemudian ketika malam hari Raib berhasil menghilangkan jerawat di dahinya. Malam itu juga , sosok tinggi kurus yang beberapa hari lalu menyapa Raib di lorong sekolah berada di dalam cermin kamar Raib. Sosok tinggi kurus itu menggendong si Hitam.\r\n\r\nSosok tinggi kurus itu bernama Tamus. Ia mengatakan bahwa ia telah mengenal Raib sejak kecil ,mengaku mengetahui siapa Raib dan dapat melatih menguasai kekuatan yang ada dalam diri Raib.ia juga mengirimkan dua ekor kucing yaitu, si putih dan si hitam ketika Raib kecil. Si hitam ternyata tak terlihat oleh orang lain termasuk papa dan mamanya. Si hitam ternyata mata-mata tamus. Tamus mengancam Raib agar tidak memberitahukan rahasia itu kepada orang lain. Tamus juga memaksa Raib untuk menghilangkan benda-benda. Tamus mengaku akan menjadi gurunya dan melatih kekuatan yang Raib miliki.\r\n\r\n\r\nSuatu ketika, Hal yang janggal pun terjadi, Miss Selena memberikan buku PR matematika Raib langsung ke rumahnya dan mengatakan hal yang sulit di cerna oleh Raib. Apa pun yang terlihat, boleh jadi tidak seperti yang kita lihat. Apa pun yang hilang, tidak selalu lenyap seperti yang kita duga. Ada banyak sekali jawaban dari tempat-tempat yang hilang.\r\n\r\nKeesokan harinya terjadi peristiwa besar di sekolah. Gardu listrik tiba-tiba saja  meledak dan menjatuhkan kabel-kabel kearah Raib dan Seli. Seli berhasil menahan kabel-kabel listrik itu. Ia pun membuka rahasianya. Ia bisa mengeluarkan petir dari tangannya. Tiang listrik pun jatuh kearah mereka. Raib pun menghilangkan tiang listrik itu. Seli akhirnya mengetahui kekuatan Raib. Tiba-tiba muncul Ali dan langsung membawa mereka berlari menuju aula sekolah.\r\n\r\nSemua berjalan sangat cepat. Di aula sekolah tempat mereka bersembunyi tiba-tiba datang 8 orang berpakaian hitam dan dipimpin oleh sosok tinggi yang muncul di cermin kamar Raib, Tamus. Mereka ingin membawa Raib ke dunia lain. Dunia Klan Bulan.\r\n\r\nMereka bertiga melawan. Seli mengeuarkan petir dari tangannya. Dia adalah salah satu rakyat Klan Matahari yang hidup di Klan Bumi. Raib secara tiba-tiba bisa melakukan pukulan berdentum.Akan tetapi, mereka bertiga tidak cukup kuat untuk melawan mereka. Dalam keadaan terdesak, tiba-tiba datang Miss Keriting (Selena) yang ternyata adalah pengintai dari Klan Bulan. Atas bantuan Miss Selena, kami bertiga tiba di kamar Raib.\r\n\r\nRaib menghilangkan buku matematikanya atas saran Ali setelah mendengar cerita singkat kejadian janggal bahwa Miss Selena memberikan buku PR matematika Raib langsung ke rumahnya, dan kemudian buku itu berubah menjadi buku tua dengan bersampul kulit berwarna gelap dengan gambar bulan sabit menghadap ke atas dan cetak timbul.Saat Raib menyentuh buku itu, muncul sinar dari gambar bulan sabit dan seketika sinar itu menjalar ke tubuh Raib. Cahaya itu semakin terang dan tiba-tiba mereka berada di ruangan berbeda. Di dunia yang berbeda. Dunia Klan Bulan.\r\n\r\nRuangan itu adalah kamar Ou, anak bungsu Ilo dan Vey. Ilo adalah perancang busana paling terkenal di Klan Bulan. Dunia Klan Bulan memiliki teknologi yang sangat maju dan ramah lingkungan. Mereka membuat sebagian besar peradabannya di bawah tanah agar tidak merusak lingkungan permukaan. Hanya orang kaya yang memiliki rumah berbentuk balon di permukaan.\r\n\r\nSetelah Ilo mengetahui bahwa mereka berasal dari dunia lain, ia membawa mereka ke perpustakaan dan menemui Av. Av adalah penjaga perpustakaan sekaligus kakek dari kakek-kakeknya Ilo. Dari Av terungkap bahwa dunia ini memiliki 3 dunia parallel yang saling berdampingan : Dunia Klan Bumi, Dunia Klan Bulan, dan Dunia Klan Matahari. Dan terungkap Raib adalah Seorang putri Bulan seorang keturunan murni Klan Bulan yang siklusnya muncul 2000 tahun sekali dan Raib adalah keturunan ke-21.Seorang keturunan murni Klan Bulan mempunyai kekuatan yang besar. Diketahui pula buku matematika Raib adalah buku Kehidupan yang diwariskan kepada keturunan murni dan hanya bisa digunakan oleh pewarisnya.Buku itu mampu membuka portal kemanapun.\r\n\r\nDunia Klan Bulan mengalami kerusuhan. Kota Tishri -tempat mereka- berada dikuasai oleh Tamus. Pasukan Bayangan menyerbu gedung Perpustakaan Sentral. Raib, Seli, Ali, dan Ilo melarikan diri dan bersembunyi di permukaan diarea pantai. Beberapa hari kemudian Av datang lewat perapian. Ia tak datang sendiri, melainkan bersama Tog. Tog adalah panglima pasukan bayangan dari Timur. Ia bertentangan dengan Tamus. Ternyata Tamus telah menyusun rencana besar sejak ribuan tahun lalu. Tog mengatakan bahwa ada seorang perempuan bertubuh tinggi dan berambut meranggas sedang disandera oleh Tamus, ia adalah Miss Selena. Miss Selena dalam bahaya.\r\n\r\nRaib, Seli, dan Ali ingin menyelamatkan Miss Selena. Mereka pun pergi ke Perpustakaan Sentral yang menjadi markas sementara Pasukan Bayangan. Mereka pergi ke sana melewati perapian secara sembunyi-sembunyi, seperti yang dilakukan oleh Av.\r\n\r\nSaat mereka ingin melepaskan Miss Selena, tiba-tiba muncul 5 orang berpakaian hitam-hitam. Mereka adalah Panglima Klan Bulan yang berada di pihak Tamus, salah satunya Stad, Panglima Barat yang hendak menghabisi mereka bertiga. Tak lama kemudian, Tamus pun datang. Tamus meminta Raib untuk membawa kembali si Tanpa Mahkota (Keturunan murni ke-20 yang merupakan kakek dari kakek kakeknya Raib)yang dikurung di penjara bayangan di bawah bayangan menggunakan buku kehidupan. Raib tidak mau. Tamus pun membuat lubang hitam dengan Buku Kematian, yaitu pintu menuju Penjara Bayangan di Bawah Bayangan dan mengancam memasukkan Miss Selena ke lubang itu. Tanpa diduga, Ali tanpa sadar berubah menjadi beruang raksasa dan menangkap Tamus dengan tangan besarnya, kemudian melemparkan Tamus ke lubang Bayangan di Bawah Bayangan. Tamus pun terkurung disana bersama si Tanpa Mahkota.'),
(2, 'Boruto', 'Boruto adalah komik seri ...', 'Komik', 125000, 10, 'boruto.jpg', ''),
(3, 'Artificiall Intelegence', 'Buku ini berisi pengetahuan mengenai dasar dasar ...', 'Teknologi', 135000, 7, 'boruto.jpg', ''),
(4, 'Bumi adalah', 'novel adalah', 'novel', 90000, 9, 'ai32.jpg', 'dfgdgd'),
(6, '', '', '', 0, 0, '', '');

-- --------------------------------------------------------

--
-- Struktur dari tabel `tb_invoice`
--

CREATE TABLE `tb_invoice` (
  `id` int(11) NOT NULL,
  `nama` varchar(70) NOT NULL,
  `alamat` varchar(250) NOT NULL,
  `tgl_pesan` datetime NOT NULL,
  `batas_bayar` datetime NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data untuk tabel `tb_invoice`
--

INSERT INTO `tb_invoice` (`id`, `nama`, `alamat`, `tgl_pesan`, `batas_bayar`) VALUES
(1, 'wahyu', 'purbalingga', '2021-07-18 06:10:22', '2021-07-19 06:10:22'),
(2, 'wahyu', 'purbalingga', '2021-07-18 06:14:31', '2021-07-19 06:14:31'),
(3, 'wahyu', 'purbalingga', '2021-07-18 06:14:53', '2021-07-19 06:14:53'),
(4, 'wahyu', 'purbalingga', '2021-07-18 06:16:51', '2021-07-19 06:16:51'),
(5, 'wahyu', 'purbalingga', '2021-07-18 06:17:34', '2021-07-19 06:17:34');

-- --------------------------------------------------------

--
-- Struktur dari tabel `tb_pesanan`
--

CREATE TABLE `tb_pesanan` (
  `id` int(11) NOT NULL,
  `id_invoice` int(11) NOT NULL,
  `id_brg` int(11) NOT NULL,
  `nama_brg` varchar(100) NOT NULL,
  `jumlah` int(3) NOT NULL,
  `harga` int(10) NOT NULL,
  `pilihan` text NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data untuk tabel `tb_pesanan`
--

INSERT INTO `tb_pesanan` (`id`, `id_invoice`, `id_brg`, `nama_brg`, `jumlah`, `harga`, `pilihan`) VALUES
(1, 3, 1, 'Bumi', 1, 98000, ''),
(2, 5, 3, 'Artificiall Intelegence', 1, 135000, '');

-- --------------------------------------------------------

--
-- Struktur dari tabel `tb_user`
--

CREATE TABLE `tb_user` (
  `id` int(11) NOT NULL,
  `nama` varchar(50) NOT NULL,
  `username` varchar(50) NOT NULL,
  `password` varchar(50) NOT NULL,
  `role_id` tinyint(1) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data untuk tabel `tb_user`
--

INSERT INTO `tb_user` (`id`, `nama`, `username`, `password`, `role_id`) VALUES
(1, 'wahyu', 'wahyu', '123', 1);

--
-- Indexes for dumped tables
--

--
-- Indeks untuk tabel `tb_barang`
--
ALTER TABLE `tb_barang`
  ADD PRIMARY KEY (`id_brg`);

--
-- Indeks untuk tabel `tb_invoice`
--
ALTER TABLE `tb_invoice`
  ADD PRIMARY KEY (`id`);

--
-- Indeks untuk tabel `tb_pesanan`
--
ALTER TABLE `tb_pesanan`
  ADD PRIMARY KEY (`id`);

--
-- Indeks untuk tabel `tb_user`
--
ALTER TABLE `tb_user`
  ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT untuk tabel yang dibuang
--

--
-- AUTO_INCREMENT untuk tabel `tb_barang`
--
ALTER TABLE `tb_barang`
  MODIFY `id_brg` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=7;

--
-- AUTO_INCREMENT untuk tabel `tb_invoice`
--
ALTER TABLE `tb_invoice`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=6;

--
-- AUTO_INCREMENT untuk tabel `tb_pesanan`
--
ALTER TABLE `tb_pesanan`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;

--
-- AUTO_INCREMENT untuk tabel `tb_user`
--
ALTER TABLE `tb_user`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
