namespace ContactManager
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
			this.ADDButton = new System.Windows.Forms.Button();
			this.ClearBtn = new System.Windows.Forms.Button();
			this.UpdateBtn = new System.Windows.Forms.Button();
			this.listView1 = new System.Windows.Forms.ListView();
			this.Nametxt = new System.Windows.Forms.TextBox();
			this.LastNametxt = new System.Windows.Forms.TextBox();
			this.PhoneTxt = new System.Windows.Forms.TextBox();
			this.DeleteBtn = new System.Windows.Forms.Button();
			this.label1 = new System.Windows.Forms.Label();
			this.label2 = new System.Windows.Forms.Label();
			this.label3 = new System.Windows.Forms.Label();
			this.FileBtn = new System.Windows.Forms.Button();
			this.SuspendLayout();
			// 
			// ADDButton
			// 
			this.ADDButton.Location = new System.Drawing.Point(201, 334);
			this.ADDButton.Margin = new System.Windows.Forms.Padding(4);
			this.ADDButton.Name = "ADDButton";
			this.ADDButton.Size = new System.Drawing.Size(97, 44);
			this.ADDButton.TabIndex = 0;
			this.ADDButton.Text = "Add";
			this.ADDButton.UseVisualStyleBackColor = true;
			this.ADDButton.Click += new System.EventHandler(this.ADDButton_Click);
			// 
			// ClearBtn
			// 
			this.ClearBtn.Location = new System.Drawing.Point(-1, 334);
			this.ClearBtn.Margin = new System.Windows.Forms.Padding(4);
			this.ClearBtn.Name = "ClearBtn";
			this.ClearBtn.Size = new System.Drawing.Size(94, 44);
			this.ClearBtn.TabIndex = 1;
			this.ClearBtn.Text = "Clear";
			this.ClearBtn.UseVisualStyleBackColor = true;
			this.ClearBtn.Click += new System.EventHandler(this.ClearBtn_Click);
			// 
			// UpdateBtn
			// 
			this.UpdateBtn.Location = new System.Drawing.Point(306, 334);
			this.UpdateBtn.Margin = new System.Windows.Forms.Padding(4);
			this.UpdateBtn.Name = "UpdateBtn";
			this.UpdateBtn.Size = new System.Drawing.Size(91, 44);
			this.UpdateBtn.TabIndex = 2;
			this.UpdateBtn.Text = "Update";
			this.UpdateBtn.UseVisualStyleBackColor = true;
			this.UpdateBtn.Click += new System.EventHandler(this.UpdateBtn_Click);
			// 
			// listView1
			// 
			this.listView1.HideSelection = false;
			this.listView1.Location = new System.Drawing.Point(394, 39);
			this.listView1.Margin = new System.Windows.Forms.Padding(4);
			this.listView1.Name = "listView1";
			this.listView1.Size = new System.Drawing.Size(486, 286);
			this.listView1.TabIndex = 3;
			this.listView1.UseCompatibleStateImageBehavior = false;
			this.listView1.MouseClick += new System.Windows.Forms.MouseEventHandler(this.listView1_MouseClick);
			// 
			// Nametxt
			// 
			this.Nametxt.Location = new System.Drawing.Point(102, 89);
			this.Nametxt.Margin = new System.Windows.Forms.Padding(4);
			this.Nametxt.Name = "Nametxt";
			this.Nametxt.Size = new System.Drawing.Size(258, 21);
			this.Nametxt.TabIndex = 4;
			// 
			// LastNametxt
			// 
			this.LastNametxt.Location = new System.Drawing.Point(102, 151);
			this.LastNametxt.Margin = new System.Windows.Forms.Padding(4);
			this.LastNametxt.Name = "LastNametxt";
			this.LastNametxt.Size = new System.Drawing.Size(258, 21);
			this.LastNametxt.TabIndex = 5;
			// 
			// PhoneTxt
			// 
			this.PhoneTxt.Location = new System.Drawing.Point(102, 212);
			this.PhoneTxt.Margin = new System.Windows.Forms.Padding(4);
			this.PhoneTxt.Name = "PhoneTxt";
			this.PhoneTxt.Size = new System.Drawing.Size(258, 21);
			this.PhoneTxt.TabIndex = 6;
			this.PhoneTxt.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.PhoneTxt_KeyPress);
			// 
			// DeleteBtn
			// 
			this.DeleteBtn.Location = new System.Drawing.Point(102, 334);
			this.DeleteBtn.Margin = new System.Windows.Forms.Padding(4);
			this.DeleteBtn.Name = "DeleteBtn";
			this.DeleteBtn.Size = new System.Drawing.Size(85, 44);
			this.DeleteBtn.TabIndex = 7;
			this.DeleteBtn.Text = "Delete";
			this.DeleteBtn.UseVisualStyleBackColor = true;
			this.DeleteBtn.Click += new System.EventHandler(this.DeleteBtn_Click);
			// 
			// label1
			// 
			this.label1.AutoSize = true;
			this.label1.Location = new System.Drawing.Point(25, 92);
			this.label1.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
			this.label1.Name = "label1";
			this.label1.Size = new System.Drawing.Size(44, 15);
			this.label1.TabIndex = 8;
			this.label1.Text = "Name:";
			// 
			// label2
			// 
			this.label2.AutoSize = true;
			this.label2.Location = new System.Drawing.Point(25, 154);
			this.label2.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
			this.label2.Name = "label2";
			this.label2.Size = new System.Drawing.Size(68, 15);
			this.label2.TabIndex = 9;
			this.label2.Text = "Last name:";
			// 
			// label3
			// 
			this.label3.AutoSize = true;
			this.label3.Location = new System.Drawing.Point(25, 218);
			this.label3.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
			this.label3.Name = "label3";
			this.label3.Size = new System.Drawing.Size(46, 15);
			this.label3.TabIndex = 10;
			this.label3.Text = "Phone:";
			// 
			// FileBtn
			// 
			this.FileBtn.Location = new System.Drawing.Point(797, 334);
			this.FileBtn.Name = "FileBtn";
			this.FileBtn.Size = new System.Drawing.Size(83, 44);
			this.FileBtn.TabIndex = 11;
			this.FileBtn.Text = "Save File";
			this.FileBtn.UseVisualStyleBackColor = true;
			this.FileBtn.Click += new System.EventHandler(this.FileBtn_Click);
			// 
			// Form1
			// 
			this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 15F);
			this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
			this.ClientSize = new System.Drawing.Size(904, 411);
			this.Controls.Add(this.FileBtn);
			this.Controls.Add(this.label3);
			this.Controls.Add(this.label2);
			this.Controls.Add(this.label1);
			this.Controls.Add(this.DeleteBtn);
			this.Controls.Add(this.PhoneTxt);
			this.Controls.Add(this.LastNametxt);
			this.Controls.Add(this.Nametxt);
			this.Controls.Add(this.listView1);
			this.Controls.Add(this.UpdateBtn);
			this.Controls.Add(this.ClearBtn);
			this.Controls.Add(this.ADDButton);
			this.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
			this.Margin = new System.Windows.Forms.Padding(4);
			this.Name = "Form1";
			this.Text = "Form1";
			this.ResumeLayout(false);
			this.PerformLayout();

		}

		#endregion

		private System.Windows.Forms.Button ADDButton;
		private System.Windows.Forms.Button ClearBtn;
		private System.Windows.Forms.Button UpdateBtn;
		private System.Windows.Forms.ListView listView1;
		private System.Windows.Forms.TextBox Nametxt;
		private System.Windows.Forms.TextBox LastNametxt;
		private System.Windows.Forms.TextBox PhoneTxt;
		private System.Windows.Forms.Button DeleteBtn;
		private System.Windows.Forms.Label label1;
		private System.Windows.Forms.Label label2;
		private System.Windows.Forms.Label label3;
		private System.Windows.Forms.Button FileBtn;
	}
}

