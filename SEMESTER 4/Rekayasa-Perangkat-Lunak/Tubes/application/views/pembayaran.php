<div class="container-fluid">
	<div class="row">
		<div class="col-md-2"></div>
		<div class="col-md-8">
			<div class="class btn btn-sm btn-success">
				<?php
				$grand_total=0;
				if($keranjang = $this->cart->contents())
					{
						foreach($keranjang as $item){
							$grand_total = $grand_total + $item['subtotal'];
						}
					echo "Total Belanja Anda: Rp. ".number_format($grand_total, 0,',','.');

					
					?>
					
			</div><br><br>

			<h5> Data Pengiriman dan Pembayaran </h5>
			<form method="post" action="<?php echo base_url('dashboard/proses_pesanan') ?> ">
				
				<div class="form-group">
					<label> Nama Lengkap</label>
					<input type="text" name="nama" placeholder="Nama Lengkap Anda" class="form-control">
				</div>
				<div class="form-group">
					<label> Alamat Lengkap</label>
					<input type="text" name="alamat" placeholder="Alamat Lengkap Anda" class="form-control">
				</div>

				<div class="form-group">
					<label> No. Telepon</label>
					<input type="text" name="no_telp" placeholder="No Telpon Anda" class="form-control">
				</div>
				<div class="form-group">
					<label> Jasa Pengiriman</label>
					<select>
						<option>J&T</option>
						<option>POS Indonesia</option>
						<option>GRAB</option>
					</select>
				</div>
				<div class="form-group">
					<label> Metode Pembayaran</label>
					<select>
						<option>BCA - 111222333</option>
						<option>DANA - 082222222</option>
						<option>SHOPEPAY - 08222222</option>
					</select>
				</div>
				<button type="submit" class="btn btn-sm btn-primary"> Pesan</button>
			</form>

			<?php
		}else{
			
			echo "<h4> Keranjang Belanja Anda Masih Kosong</h4>";
		}
			?>
		
		</div> 

		<div class="col-md-2"></div>
	</div>
</div>