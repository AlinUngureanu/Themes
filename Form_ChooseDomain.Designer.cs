
namespace Tema1
{
    partial class Form_ChooseDomain
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
            this.label_urare = new System.Windows.Forms.Label();
            this.listBox1 = new System.Windows.Forms.ListBox();
            this.label_list = new System.Windows.Forms.Label();
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.button_exit = new System.Windows.Forms.Button();
            this.button_choose = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            this.SuspendLayout();
            // 
            // label_urare
            // 
            this.label_urare.AutoSize = true;
            this.label_urare.Font = new System.Drawing.Font("Calibri", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label_urare.Location = new System.Drawing.Point(282, 57);
            this.label_urare.Name = "label_urare";
            this.label_urare.Size = new System.Drawing.Size(124, 18);
            this.label_urare.TabIndex = 0;
            this.label_urare.Text = "Salutare username";
            // 
            // listBox1
            // 
            this.listBox1.FormattingEnabled = true;
            this.listBox1.ItemHeight = 16;
            this.listBox1.Items.AddRange(new object[] {
            "Artă",
            "Istorie",
            "Sport",
            "Geografie",
            "Știință"});
            this.listBox1.Location = new System.Drawing.Point(110, 130);
            this.listBox1.Name = "listBox1";
            this.listBox1.Size = new System.Drawing.Size(153, 148);
            this.listBox1.TabIndex = 1;
            this.listBox1.SelectedIndexChanged += new System.EventHandler(this.listBox1_SelectedIndexChanged);
            // 
            // label_list
            // 
            this.label_list.AutoSize = true;
            this.label_list.Location = new System.Drawing.Point(112, 113);
            this.label_list.Name = "label_list";
            this.label_list.Size = new System.Drawing.Size(112, 17);
            this.label_list.TabIndex = 2;
            this.label_list.Text = "Alegeți domeniul";
            // 
            // pictureBox1
            // 
            this.pictureBox1.Location = new System.Drawing.Point(460, 113);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(208, 165);
            this.pictureBox1.TabIndex = 3;
            this.pictureBox1.TabStop = false;
            // 
            // button_exit
            // 
            this.button_exit.Location = new System.Drawing.Point(321, 375);
            this.button_exit.Name = "button_exit";
            this.button_exit.Size = new System.Drawing.Size(75, 26);
            this.button_exit.TabIndex = 4;
            this.button_exit.Text = "Ieșire";
            this.button_exit.UseVisualStyleBackColor = true;
            this.button_exit.Click += new System.EventHandler(this.button_exit_Click);
            // 
            // button_choose
            // 
            this.button_choose.Location = new System.Drawing.Point(321, 311);
            this.button_choose.Name = "button_choose";
            this.button_choose.Size = new System.Drawing.Size(75, 28);
            this.button_choose.TabIndex = 5;
            this.button_choose.Text = "Alege";
            this.button_choose.UseVisualStyleBackColor = true;
            this.button_choose.Click += new System.EventHandler(this.button_choose_Click);
            // 
            // Form_ChooseDomain
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(255)))), ((int)(((byte)(128)))));
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.button_choose);
            this.Controls.Add(this.button_exit);
            this.Controls.Add(this.pictureBox1);
            this.Controls.Add(this.label_list);
            this.Controls.Add(this.listBox1);
            this.Controls.Add(this.label_urare);
            this.Name = "Form_ChooseDomain";
            this.Text = "Domenii";
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label_urare;
        private System.Windows.Forms.ListBox listBox1;
        private System.Windows.Forms.Label label_list;
        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.Button button_exit;
        private System.Windows.Forms.Button button_choose;
    }
}