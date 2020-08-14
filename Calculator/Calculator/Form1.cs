using System;
using System.Windows.Forms;

namespace Calculator
{
	public partial class Form1 : Form
	{
		Double resultValue = 0;
		string operationPerfomed = "";
		bool isOperationPerfomed = false;

		public Form1()
		{
			InitializeComponent();
		}

		private void Button_Click(object sender, EventArgs e)
		{
			if (isOperationPerfomed) TxtBoxResult.Clear();
			isOperationPerfomed = false;
			Button button = (Button)sender;
			if(button.Text == ".")
			{
				if(!TxtBoxResult.Text.Contains("."))
					TxtBoxResult.Text += button.Text;
			}
			else
			TxtBoxResult.Text += button.Text;
		}

		private void Operator_Click(object sender, EventArgs e)
		{
			Button button = (Button)sender;
			if(resultValue != 0)
			{
				BtnEqual.PerformClick();
				operationPerfomed = button.Text;
				labelCurrentOperation.Text = resultValue + " " + operationPerfomed;
				isOperationPerfomed = true;
			}
			else
			{
				operationPerfomed = button.Text;
				resultValue = Double.Parse(TxtBoxResult.Text);
				labelCurrentOperation.Text = resultValue + " " + operationPerfomed;
				isOperationPerfomed = true;
			}
		}

		private void BtnClear_Click(object sender, EventArgs e)
		{
			TxtBoxResult.Text = "0";
		}

		private void BtnCancelEntry_Click(object sender, EventArgs e)
		{
			TxtBoxResult.Text = "0";
			resultValue = 0;
		}

		private void BtnEqual_Click(object sender, EventArgs e)
		{
			switch(operationPerfomed)
			{
				case "+":
					TxtBoxResult.Text = (resultValue + Double.Parse(TxtBoxResult.Text)).ToString();
					break;
				case "-":
					TxtBoxResult.Text = (resultValue - Double.Parse(TxtBoxResult.Text)).ToString();
					break;
				case "/":
					TxtBoxResult.Text = (resultValue / Double.Parse(TxtBoxResult.Text)).ToString();
					break;
				case "*":
					TxtBoxResult.Text = (resultValue * Double.Parse(TxtBoxResult.Text)).ToString();
					break;
				default:
					break;
			}
			resultValue = Double.Parse(TxtBoxResult.Text);
			labelCurrentOperation.Text = "";
		}
	}
}
