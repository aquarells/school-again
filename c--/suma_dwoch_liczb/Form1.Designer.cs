namespace suma_dwoch_liczb
{
    partial class Form1
    {
        /// <summary>
        /// Wymagana zmienna projektanta.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Wyczyść wszystkie używane zasoby.
        /// </summary>
        /// <param name="disposing">prawda, jeżeli zarządzane zasoby powinny zostać zlikwidowane; Fałsz w przeciwnym wypadku.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Kod generowany przez Projektanta formularzy systemu Windows

        /// <summary>
        /// Metoda wymagana do obsługi projektanta — nie należy modyfikować
        /// jej zawartości w edytorze kodu.
        /// </summary>
        private void InitializeComponent()
        {
            this.liczba1 = new System.Windows.Forms.TextBox();
            this.plus = new System.Windows.Forms.Label();
            this.liczba2 = new System.Windows.Forms.TextBox();
            this.rownaSie = new System.Windows.Forms.Button();
            this.wynik = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // liczba1
            // 
            this.liczba1.Location = new System.Drawing.Point(12, 41);
            this.liczba1.Name = "liczba1";
            this.liczba1.Size = new System.Drawing.Size(100, 20);
            this.liczba1.TabIndex = 0;
            // 
            // plus
            // 
            this.plus.AutoSize = true;
            this.plus.Location = new System.Drawing.Point(118, 44);
            this.plus.Name = "plus";
            this.plus.Size = new System.Drawing.Size(13, 13);
            this.plus.TabIndex = 1;
            this.plus.Text = "+";
            // 
            // liczba2
            // 
            this.liczba2.Location = new System.Drawing.Point(137, 41);
            this.liczba2.Name = "liczba2";
            this.liczba2.Size = new System.Drawing.Size(100, 20);
            this.liczba2.TabIndex = 2;
            // 
            // rownaSie
            // 
            this.rownaSie.Location = new System.Drawing.Point(243, 39);
            this.rownaSie.Name = "rownaSie";
            this.rownaSie.Size = new System.Drawing.Size(35, 23);
            this.rownaSie.TabIndex = 3;
            this.rownaSie.Text = "=";
            this.rownaSie.UseVisualStyleBackColor = true;
            this.rownaSie.Click += new System.EventHandler(this.rownaSie_Click);
            // 
            // wynik
            // 
            this.wynik.AutoSize = true;
            this.wynik.Location = new System.Drawing.Point(284, 44);
            this.wynik.Name = "wynik";
            this.wynik.Size = new System.Drawing.Size(0, 13);
            this.wynik.TabIndex = 4;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.wynik);
            this.Controls.Add(this.rownaSie);
            this.Controls.Add(this.liczba2);
            this.Controls.Add(this.plus);
            this.Controls.Add(this.liczba1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox liczba1;
        private System.Windows.Forms.Label plus;
        private System.Windows.Forms.TextBox liczba2;
        private System.Windows.Forms.Button rownaSie;
        private System.Windows.Forms.Label wynik;
    }
}

