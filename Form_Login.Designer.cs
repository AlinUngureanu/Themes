
namespace Tema1
{
    partial class Form_Login
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
            this.label_user = new System.Windows.Forms.Label();
            this.label_password = new System.Windows.Forms.Label();
            this.textBox_user = new System.Windows.Forms.TextBox();
            this.textBox_password = new System.Windows.Forms.TextBox();
            this.button_login = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // label_user
            // 
            this.label_user.AutoSize = true;
            this.label_user.Location = new System.Drawing.Point(110, 120);
            this.label_user.Name = "label_user";
            this.label_user.Size = new System.Drawing.Size(38, 17);
            this.label_user.TabIndex = 0;
            this.label_user.Text = "User";
            // 
            // label_password
            // 
            this.label_password.AutoSize = true;
            this.label_password.Location = new System.Drawing.Point(110, 173);
            this.label_password.Name = "label_password";
            this.label_password.Size = new System.Drawing.Size(69, 17);
            this.label_password.TabIndex = 1;
            this.label_password.Text = "Password";
            // 
            // textBox_user
            // 
            this.textBox_user.Location = new System.Drawing.Point(268, 120);
            this.textBox_user.Name = "textBox_user";
            this.textBox_user.Size = new System.Drawing.Size(100, 22);
            this.textBox_user.TabIndex = 2;
            // 
            // textBox_password
            // 
            this.textBox_password.Location = new System.Drawing.Point(268, 170);
            this.textBox_password.Name = "textBox_password";
            this.textBox_password.Size = new System.Drawing.Size(100, 22);
            this.textBox_password.TabIndex = 3;
            // 
            // button_login
            // 
            this.button_login.Location = new System.Drawing.Point(177, 241);
            this.button_login.Name = "button_login";
            this.button_login.Size = new System.Drawing.Size(88, 27);
            this.button_login.TabIndex = 4;
            this.button_login.Text = "Conectare";
            this.button_login.UseVisualStyleBackColor = true;
            this.button_login.Click += new System.EventHandler(this.button_login_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Calibri", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.Location = new System.Drawing.Point(117, 31);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(246, 18);
            this.label1.TabIndex = 5;
            this.label1.Text = "Bine ați venit, vă rugăm să vă conectați";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Calibri", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.Location = new System.Drawing.Point(110, 48);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(255, 18);
            this.label2.TabIndex = 6;
            this.label2.Text = "pentru a vă putea bucura de experiență.";
            // 
            // Form_Login
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(255)))), ((int)(((byte)(128)))));
            this.ClientSize = new System.Drawing.Size(485, 373);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.button_login);
            this.Controls.Add(this.textBox_password);
            this.Controls.Add(this.textBox_user);
            this.Controls.Add(this.label_password);
            this.Controls.Add(this.label_user);
            this.ForeColor = System.Drawing.SystemColors.ControlText;
            this.Name = "Form_Login";
            this.Text = "Login";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label_user;
        private System.Windows.Forms.Label label_password;
        private System.Windows.Forms.TextBox textBox_user;
        private System.Windows.Forms.TextBox textBox_password;
        private System.Windows.Forms.Button button_login;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
    }
}

