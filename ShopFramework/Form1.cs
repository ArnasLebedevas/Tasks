using System;
using System.Windows.Forms;
namespace ShopFramework
{
	public partial class Form1 : Form
	{
		public Form1()
		{
			InitializeComponent();
		}

		private void Form1_Load(object sender, EventArgs e)
		{
		}

		private void RadioBtn1_CheckedChanged(object sender, EventArgs e)
		{
			radioBtn1.ForeColor = System.Drawing.Color.Green;
			radioBtn2.ForeColor = System.Drawing.Color.Red;

			cmb_items.Items.Clear();
			cmb_items.Items.Add("Chicken wings");
			cmb_items.Items.Add("Salad");
			cmb_items.Items.Add("Pork steak");
			cmb_items.Items.Add("Roasted ribs");
			cmb_items.Items.Add("Day soup");
			cmb_items.Items.Add("Chicken wings");
		}

		private void RadioBtn2_CheckedChanged(object sender, EventArgs e)
		{
			radioBtn1.ForeColor = System.Drawing.Color.Red;
			radioBtn2.ForeColor = System.Drawing.Color.Green;

			cmb_items.Items.Clear();
			cmb_items.Items.Add("Water");
			cmb_items.Items.Add("Coca cola");
			cmb_items.Items.Add("Fanta");
			cmb_items.Items.Add("Pepsi");
			cmb_items.Items.Add("Juice");
			cmb_items.Items.Add("Sprite");
		}

		private void Cmb_items_SelectedIndexChanged(object sender, EventArgs e)
		{
			if(cmb_items.SelectedItem.ToString() == "Chicken wings")
			{
				txt_price.Text = "10";
			}
			else if(cmb_items.SelectedItem.ToString() == "Salad")
			{
				txt_price.Text = "15";
			}
			else if(cmb_items.SelectedItem.ToString() == "Pork steak")
			{
				txt_price.Text = "15"; 
			}
			else if(cmb_items.SelectedItem.ToString() == "Roasted ribs")
			{
				txt_price.Text = "13";
			}
			else if(cmb_items.SelectedItem.ToString() == "Day soup")
			{
				txt_price.Text = "8";
			}
			else if(cmb_items.SelectedItem.ToString() == "Chicken wings")
			{
				txt_price.Text = "13";
			}
			else if (cmb_items.SelectedItem.ToString() == "Water")
			{
				txt_price.Text = "1";
			}
			else if (cmb_items.SelectedItem.ToString() == "Coca cola")
			{
				txt_price.Text = "3";
			}
			else if (cmb_items.SelectedItem.ToString() == "Fanta")
			{
				txt_price.Text = "3";
			}
			else if (cmb_items.SelectedItem.ToString() == "Pepsi")
			{
				txt_price.Text = "3";
			}
			else if (cmb_items.SelectedItem.ToString() == "Juice")
			{
				txt_price.Text = "2";
			}
			else if (cmb_items.SelectedItem.ToString() == "Sprite")
			{
				txt_price.Text = "3";
			}

			txt_total.Text = "";
			txt_quantity.Text = "";
		}

		private void Txt_quantity_TextChanged(object sender, EventArgs e)
		{
			if(txt_quantity.Text.Length > 0)
			{
				txt_total.Text = (Convert.ToInt32(txt_price.Text) * Convert.ToInt32(txt_quantity.Text)).ToString();
			}
		}

		private void Button1_Click(object sender, EventArgs e)
		{
			if(cmb_items.Text.Length > 0 && txt_quantity.Text.Length > 0)
			{
				string[] array = new string[4];
				array[0] = cmb_items.SelectedItem.ToString();
				array[1] = txt_price.Text;
				array[2] = txt_quantity.Text;
				array[3] = txt_total.Text;

				ListViewItem selectedItems = new ListViewItem(array);
				listView1.Items.Add(selectedItems);

				if (txt_sub.Text.Length > 0)
				{
					txt_sub.Text = (Convert.ToInt16(txt_sub.Text) + Convert.ToInt16(txt_total.Text)).ToString();
				}
				else
				{
					txt_sub.Text = (Convert.ToInt16(txt_total.Text)).ToString();
				}
			}
			else
			{
				MessageBox.Show("Please select item");
			}
		}

		private void Txt_discount_TextChanged(object sender, EventArgs e)
		{
			if(txt_discount.Text.Length > 0)
			{
				txt_net.Text = (Convert.ToInt32(txt_sub.Text) - Convert.ToInt32(txt_discount.Text)).ToString();
			}
		}

		private void Txt_paid_TextChanged(object sender, EventArgs e)
		{
			if(txt_paid.Text.Length > 0)
			{
				txt_balance.Text = (Convert.ToInt32(txt_net.Text) - Convert.ToInt32(txt_paid.Text)).ToString();
			}
		}

		private void BtnRemove_Click(object sender, EventArgs e)
		{
			if(listView1.SelectedItems.Count > 0)
			{
				for(int i = 0; i < listView1.Items.Count; i++)
				{
					if(listView1.Items[i].Selected)
					{
						txt_sub.Text = (Convert.ToInt32(txt_sub.Text) - Convert.ToInt32(listView1.Items[i].SubItems[3].Text)).ToString();

						listView1.Items[i].Remove();
					}
				}
			}
			else
			{
				MessageBox.Show("Please select a text field from list");
			}
		}
	}
}
