<div class="container-fluid">

	<div class="card">
		<h5 class="card-header">Detail Produk</h5>
		<div class ="card-body">

			<?php foreach($barang as $brg): ?>
			<div class="row">
				<div class="col-md-3">
					<?php echo anchor('dashboard/trial/'.$brg->id_brg,'<div class="btn btn-sm btn-warning mt-1 mb-1">Trial Ebook</div>')?>
				
					
					<img src="<?php echo base_url().'/uploads/' .$brg->gambar ?>" class="card-img-top">					
				</div>

				<div class="col-md-8">
					<table class="table">
						<tr>
							<td>Nama Produk</td>
							<td><strong><?php echo $brg->nama_brg ?></strong></td>
						</tr>
						<tr>
							<td>Keterangan</td>
							<td><?php echo $brg->keterangan ?></td>
						</tr>
						<tr>
							<td>Kategori</td>
							<td><?php echo $brg->kategori ?></td>
						</tr>
						<tr>
							<td>Stok</td>
							<td><?php echo $brg->stok ?></td>
						</tr>
						<tr>
							<td>Harga</td>
							<td><div class="btn btn-sm btn-success"> Rp. <?php echo number_format($brg->harga,0,',','.') ?></div></td>
						</tr>
						
					</table>

				<?php echo anchor('dashboard/tambah_ke_keranjang/' .$brg->id_brg, '<div class="btn btn-sm btn-primary"> Add to cart </div>')?>

				<?php echo anchor('dashboard/index/','<div class="btn btn-sm btn-danger"> Back</div>')?>


				</div>
			
		</div>
		<?php endforeach; ?>
		
	</div>
</div>