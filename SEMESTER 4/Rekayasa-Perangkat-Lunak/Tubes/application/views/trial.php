<div class="container-fluid">

	<div class="card">
		<h5 class="card-header">Trial Ebook</h5>
		<div class ="card-body">

			<?php foreach($barang as $brg): ?>
			<div class="row">
				<div class="col-md-3">
					<img src="<?php echo base_url().'/uploads/' .$brg->gambar ?>" class="card-img-top">
					<?php echo anchor('dashboard/tambah_ke_keranjang/' .$brg->id_brg, '<div class="btn btn-sm btn-primary ml-5"> Add to cart </div>')?>

					<?php echo anchor('dashboard/index/','<div class="btn btn-sm btn-danger"> Back</div>')?>					
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
				</div>
			
		</div>
		<br>
		<p align="justify"><?php echo $brg->trial ?></p>
		<?php endforeach; ?>
		
	</div>
</div>