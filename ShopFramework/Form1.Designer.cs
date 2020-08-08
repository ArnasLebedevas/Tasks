namespace ShopFramework
{
	partial class Form1
	{
		/// <summary>
		/// Required designer variable.
		/// </summary>
		private System.ComponentModel.IContainer components = null;

		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		/// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
		protected override void Dispose(bool disposing)
		{
			if (disposing && (components != null))
			{
				components.Dispose();
			}
			base.Dispose(disposing);
		}

		#region Windows Form Designer generated code

		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		private void InitializeComponent()
		{
			this.listView1 = new System.Windows.Forms.ListView();
			this.columnHeader1 = ((System.Windows.Forms.ColumnHeader)(new System.Windows.Forms.ColumnHeader()));
			this.columnHeader2 = ((System.Windows.Forms.ColumnHeader)(new System.Windows.Forms.ColumnHeader()));
			this.columnHeader3 = ((System.Windows.Forms.ColumnHeader)(new System.Windows.Forms.ColumnHeader()));
			this.columnHeader4 = ((System.Windows.Forms.ColumnHeader)(new System.Windows.Forms.ColumnHeader()));
			this.cmb_items = new System.Windows.Forms.ComboBox();
			this.label1 = new System.Windows.Forms.Label();
			this.radioBtn1 = new System.Windows.Forms.RadioButton();
			this.radioBtn2 = new System.Windows.Forms.RadioButton();
			this.txt_price = new System.Windows.Forms.TextBox();
			this.label2 = new System.Windows.Forms.Label();
			this.txt_quantity = new System.Windows.Forms.TextBox();
			this.label4 = new System.Windows.Forms.Label();
			this.txt_total = new System.Windows.Forms.TextBox();
			this.button1 = new System.Windows.Forms.Button();
			this.txt_discount = new System.Windows.Forms.TextBox();
			this.txt_sub = new System.Windows.Forms.TextBox();
			this.label5 = new System.Windows.Forms.Label();
			this.label6 = new System.Windows.Forms.Label();
			this.label7 = new System.Windows.Forms.Label();
			this.txt_net = new System.Windows.Forms.TextBox();
			this.label8 = new System.Windows.Forms.Label();
			this.txt_balance = new System.Windows.Forms.TextBox();
			this.label9 = new System.Windows.Forms.Label();
			this.txt_paid = new System.Windows.Forms.TextBox();
			this.label3 = new System.Windows.Forms.Label();
			this.BtnRemove = new System.Windows.Forms.Button();
			this.SuspendLayout();
			// 
			// listView1
			// 
			this.listView1.Columns.AddRange(new System.Windows.Forms.ColumnHeader[] {
            this.columnHeader1,
            this.columnHeader2,
            this.columnHeader3,
            this.columnHeader4});
			this.listView1.FullRowSelect = true;
			this.listView1.HideSelection = false;
			this.listView1.Location = new System.Drawing.Point(15, 206);
			this.listView1.Margin = new System.Windows.Forms.Padding(4);
			this.listView1.Name = "listView1";
			this.listView1.Size = new System.Drawing.Size(603, 187);
			this.listView1.TabIndex = 0;
			this.listView1.UseCompatibleStateImageBehavior = false;
			this.listView1.View = System.Windows.Forms.View.Details;
			// 
			// columnHeader1
			// 
			this.columnHeader1.Text = "Product";
			this.columnHeader1.Width = 250;
			// 
			// columnHeader2
			// 
			this.columnHeader2.Text = "Price";
			this.columnHeader2.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
			this.columnHeader2.Width = 115;
			// 
			// columnHeader3
			// 
			this.columnHeader3.Text = "Quantity";
			this.columnHeader3.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
			this.columnHeader3.Width = 115;
			// 
			// columnHeader4
			// 
			this.columnHeader4.Text = "Total";
			this.columnHeader4.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
			this.columnHeader4.Width = 115;
			// 
			// cmb_items
			// 
			this.cmb_items.FormattingEnabled = true;
			this.cmb_items.Location = new System.Drawing.Point(116, 51);
			this.cmb_items.Margin = new System.Windows.Forms.Padding(4);
			this.cmb_items.Name = "cmb_items";
			this.cmb_items.Size = new System.Drawing.Size(410, 24);
			this.cmb_items.TabIndex = 1;
			this.cmb_items.SelectedIndexChanged += new System.EventHandler(this.Cmb_items_SelectedIndexChanged);
			// 
			// label1
			// 
			this.label1.AutoSize = true;
			this.label1.Location = new System.Drawing.Point(31, 54);
			this.label1.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
			this.label1.Name = "label1";
			this.label1.Size = new System.Drawing.Size(77, 16);
			this.label1.TabIndex = 2;
			this.label1.Text = "Select item:";
			// 
			// radioBtn1
			// 
			this.radioBtn1.AutoSize = true;
			this.radioBtn1.Location = new System.Drawing.Point(173, 23);
			this.radioBtn1.Margin = new System.Windows.Forms.Padding(4);
			this.radioBtn1.Name = "radioBtn1";
			this.radioBtn1.Size = new System.Drawing.Size(58, 20);
			this.radioBtn1.TabIndex = 3;
			this.radioBtn1.TabStop = true;
			this.radioBtn1.Text = "Food";
			this.radioBtn1.UseVisualStyleBackColor = true;
			this.radioBtn1.CheckedChanged += new System.EventHandler(this.RadioBtn1_CheckedChanged);
			// 
			// radioBtn2
			// 
			this.radioBtn2.AutoSize = true;
			this.radioBtn2.Location = new System.Drawing.Point(413, 23);
			this.radioBtn2.Margin = new System.Windows.Forms.Padding(4);
			this.radioBtn2.Name = "radioBtn2";
			this.radioBtn2.Size = new System.Drawing.Size(64, 20);
			this.radioBtn2.TabIndex = 4;
			this.radioBtn2.TabStop = true;
			this.radioBtn2.Text = "Drinks";
			this.radioBtn2.UseVisualStyleBackColor = true;
			this.radioBtn2.CheckedChanged += new System.EventHandler(this.RadioBtn2_CheckedChanged);
			// 
			// txt_price
			// 
			this.txt_price.Location = new System.Drawing.Point(85, 134);
			this.txt_price.Name = "txt_price";
			this.txt_price.Size = new System.Drawing.Size(100, 22);
			this.txt_price.TabIndex = 5;
			this.txt_price.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
			// 
			// label2
			// 
			this.label2.AutoSize = true;
			this.label2.Location = new System.Drawing.Point(113, 116);
			this.label2.Name = "label2";
			this.label2.Size = new System.Drawing.Size(39, 16);
			this.label2.TabIndex = 6;
			this.label2.Text = "Price";
			// 
			// txt_quantity
			// 
			this.txt_quantity.Location = new System.Drawing.Point(243, 135);
			this.txt_quantity.Name = "txt_quantity";
			this.txt_quantity.Size = new System.Drawing.Size(100, 22);
			this.txt_quantity.TabIndex = 7;
			this.txt_quantity.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
			this.txt_quantity.TextChanged += new System.EventHandler(this.Txt_quantity_TextChanged);
			// 
			// label4
			// 
			this.label4.AutoSize = true;
			this.label4.Location = new System.Drawing.Point(416, 116);
			this.label4.Name = "label4";
			this.label4.Size = new System.Drawing.Size(39, 16);
			this.label4.TabIndex = 10;
			this.label4.Text = "Total";
			// 
			// txt_total
			// 
			this.txt_total.Location = new System.Drawing.Point(390, 134);
			this.txt_total.Name = "txt_total";
			this.txt_total.Size = new System.Drawing.Size(100, 22);
			this.txt_total.TabIndex = 9;
			this.txt_total.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
			// 
			// button1
			// 
			this.button1.Location = new System.Drawing.Point(528, 134);
			this.button1.Name = "button1";
			this.button1.Size = new System.Drawing.Size(90, 23);
			this.button1.TabIndex = 11;
			this.button1.Text = "Add";
			this.button1.UseVisualStyleBackColor = true;
			this.button1.Click += new System.EventHandler(this.Button1_Click);
			// 
			// txt_discount
			// 
			this.txt_discount.Location = new System.Drawing.Point(287, 400);
			this.txt_discount.Name = "txt_discount";
			this.txt_discount.Size = new System.Drawing.Size(100, 22);
			this.txt_discount.TabIndex = 12;
			this.txt_discount.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
			this.txt_discount.TextChanged += new System.EventHandler(this.Txt_discount_TextChanged);
			// 
			// txt_sub
			// 
			this.txt_sub.Location = new System.Drawing.Point(78, 400);
			this.txt_sub.Name = "txt_sub";
			this.txt_sub.Size = new System.Drawing.Size(100, 22);
			this.txt_sub.TabIndex = 13;
			this.txt_sub.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
			// 
			// label5
			// 
			this.label5.AutoSize = true;
			this.label5.Location = new System.Drawing.Point(12, 403);
			this.label5.Name = "label5";
			this.label5.Size = new System.Drawing.Size(63, 16);
			this.label5.TabIndex = 14;
			this.label5.Text = "Sub total:";
			// 
			// label6
			// 
			this.label6.AutoSize = true;
			this.label6.Location = new System.Drawing.Point(218, 403);
			this.label6.Name = "label6";
			this.label6.Size = new System.Drawing.Size(63, 16);
			this.label6.TabIndex = 15;
			this.label6.Text = "Discount:";
			// 
			// label7
			// 
			this.label7.AutoSize = true;
			this.label7.Location = new System.Drawing.Point(445, 403);
			this.label7.Name = "label7";
			this.label7.Size = new System.Drawing.Size(32, 16);
			this.label7.TabIndex = 17;
			this.label7.Text = "Net:";
			// 
			// txt_net
			// 
			this.txt_net.Location = new System.Drawing.Point(483, 400);
			this.txt_net.Name = "txt_net";
			this.txt_net.Size = new System.Drawing.Size(100, 22);
			this.txt_net.TabIndex = 16;
			this.txt_net.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
			// 
			// label8
			// 
			this.label8.AutoSize = true;
			this.label8.Location = new System.Drawing.Point(416, 490);
			this.label8.Name = "label8";
			this.label8.Size = new System.Drawing.Size(61, 16);
			this.label8.TabIndex = 19;
			this.label8.Text = "Balance:";
			// 
			// txt_balance
			// 
			this.txt_balance.Location = new System.Drawing.Point(483, 487);
			this.txt_balance.Name = "txt_balance";
			this.txt_balance.Size = new System.Drawing.Size(100, 22);
			this.txt_balance.TabIndex = 18;
			this.txt_balance.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
			// 
			// label9
			// 
			this.label9.AutoSize = true;
			this.label9.Location = new System.Drawing.Point(438, 443);
			this.label9.Name = "label9";
			this.label9.Size = new System.Drawing.Size(39, 16);
			this.label9.TabIndex = 21;
			this.label9.Text = "Paid:";
			// 
			// txt_paid
			// 
			this.txt_paid.Location = new System.Drawing.Point(483, 443);
			this.txt_paid.Name = "txt_paid";
			this.txt_paid.Size = new System.Drawing.Size(100, 22);
			this.txt_paid.TabIndex = 20;
			this.txt_paid.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
			this.txt_paid.TextChanged += new System.EventHandler(this.Txt_paid_TextChanged);
			// 
			// label3
			// 
			this.label3.AutoSize = true;
			this.label3.Location = new System.Drawing.Point(263, 116);
			this.label3.Name = "label3";
			this.label3.Size = new System.Drawing.Size(56, 16);
			this.label3.TabIndex = 22;
			this.label3.Text = "Quantity";
			// 
			// BtnRemove
			// 
			this.BtnRemove.Location = new System.Drawing.Point(528, 163);
			this.BtnRemove.Name = "BtnRemove";
			this.BtnRemove.Size = new System.Drawing.Size(90, 27);
			this.BtnRemove.TabIndex = 23;
			this.BtnRemove.Text = "Remove";
			this.BtnRemove.UseVisualStyleBackColor = true;
			this.BtnRemove.Click += new System.EventHandler(this.BtnRemove_Click);
			// 
			// Form1
			// 
			this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
			this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
			this.BackColor = System.Drawing.SystemColors.Control;
			this.ClientSize = new System.Drawing.Size(632, 541);
			this.Controls.Add(this.BtnRemove);
			this.Controls.Add(this.label3);
			this.Controls.Add(this.label9);
			this.Controls.Add(this.txt_paid);
			this.Controls.Add(this.label8);
			this.Controls.Add(this.txt_balance);
			this.Controls.Add(this.label7);
			this.Controls.Add(this.txt_net);
			this.Controls.Add(this.label6);
			this.Controls.Add(this.label5);
			this.Controls.Add(this.txt_sub);
			this.Controls.Add(this.txt_discount);
			this.Controls.Add(this.button1);
			this.Controls.Add(this.label4);
			this.Controls.Add(this.txt_total);
			this.Controls.Add(this.txt_quantity);
			this.Controls.Add(this.label2);
			this.Controls.Add(this.txt_price);
			this.Controls.Add(this.radioBtn2);
			this.Controls.Add(this.radioBtn1);
			this.Controls.Add(this.label1);
			this.Controls.Add(this.cmb_items);
			this.Controls.Add(this.listView1);
			this.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
			this.Margin = new System.Windows.Forms.Padding(4);
			this.Name = "Form1";
			this.Text = "Form1";
			this.Load += new System.EventHandler(this.Form1_Load);
			this.ResumeLayout(false);
			this.PerformLayout();

		}

		#endregion

		private System.Windows.Forms.ListView listView1;
		private System.Windows.Forms.ComboBox cmb_items;
		private System.Windows.Forms.Label label1;
		private System.Windows.Forms.RadioButton radioBtn1;
		private System.Windows.Forms.RadioButton radioBtn2;
		private System.Windows.Forms.TextBox txt_price;
		private System.Windows.Forms.Label label2;
		private System.Windows.Forms.TextBox txt_quantity;
		private System.Windows.Forms.Label label4;
		private System.Windows.Forms.TextBox txt_total;
		private System.Windows.Forms.Button button1;
		private System.Windows.Forms.TextBox txt_discount;
		private System.Windows.Forms.TextBox txt_sub;
		private System.Windows.Forms.Label label5;
		private System.Windows.Forms.Label label6;
		private System.Windows.Forms.Label label7;
		private System.Windows.Forms.TextBox txt_net;
		private System.Windows.Forms.Label label8;
		private System.Windows.Forms.TextBox txt_balance;
		private System.Windows.Forms.Label label9;
		private System.Windows.Forms.TextBox txt_paid;
		private System.Windows.Forms.ColumnHeader columnHeader1;
		private System.Windows.Forms.ColumnHeader columnHeader2;
		private System.Windows.Forms.ColumnHeader columnHeader3;
		private System.Windows.Forms.ColumnHeader columnHeader4;
		private System.Windows.Forms.Label label3;
		private System.Windows.Forms.Button BtnRemove;
	}
}

