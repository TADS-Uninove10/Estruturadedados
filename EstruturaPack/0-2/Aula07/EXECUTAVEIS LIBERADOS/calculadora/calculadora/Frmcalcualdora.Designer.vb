<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class calculadora
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.Label1 = New System.Windows.Forms.Label()
        Me.Label2 = New System.Windows.Forms.Label()
        Me.Label3 = New System.Windows.Forms.Label()
        Me.Label4 = New System.Windows.Forms.Label()
        Me.Txtx = New System.Windows.Forms.TextBox()
        Me.Txty = New System.Windows.Forms.TextBox()
        Me.Txtresultado = New System.Windows.Forms.TextBox()
        Me.Rdbsomar = New System.Windows.Forms.RadioButton()
        Me.Rdbsubtrair = New System.Windows.Forms.RadioButton()
        Me.Rdbmultiplicar = New System.Windows.Forms.RadioButton()
        Me.Rdbdividir = New System.Windows.Forms.RadioButton()
        Me.Btnlimpar = New System.Windows.Forms.Button()
        Me.Btncalcular = New System.Windows.Forms.Button()
        Me.Btnfechar = New System.Windows.Forms.Button()
        Me.GroupBox1 = New System.Windows.Forms.GroupBox()
        Me.SuspendLayout()
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Location = New System.Drawing.Point(28, 29)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(14, 13)
        Me.Label1.TabIndex = 0
        Me.Label1.Text = "X"
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.Location = New System.Drawing.Point(31, 113)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(0, 13)
        Me.Label2.TabIndex = 1
        '
        'Label3
        '
        Me.Label3.AutoSize = True
        Me.Label3.Location = New System.Drawing.Point(28, 100)
        Me.Label3.Name = "Label3"
        Me.Label3.Size = New System.Drawing.Size(14, 13)
        Me.Label3.TabIndex = 2
        Me.Label3.Text = "Y"
        '
        'Label4
        '
        Me.Label4.AutoSize = True
        Me.Label4.Location = New System.Drawing.Point(28, 169)
        Me.Label4.Name = "Label4"
        Me.Label4.Size = New System.Drawing.Size(55, 13)
        Me.Label4.TabIndex = 3
        Me.Label4.Text = "Resultado"
        '
        'Txtx
        '
        Me.Txtx.Location = New System.Drawing.Point(121, 29)
        Me.Txtx.Name = "Txtx"
        Me.Txtx.Size = New System.Drawing.Size(100, 20)
        Me.Txtx.TabIndex = 4
        '
        'Txty
        '
        Me.Txty.Location = New System.Drawing.Point(121, 92)
        Me.Txty.Name = "Txty"
        Me.Txty.Size = New System.Drawing.Size(100, 20)
        Me.Txty.TabIndex = 5
        '
        'Txtresultado
        '
        Me.Txtresultado.Location = New System.Drawing.Point(121, 169)
        Me.Txtresultado.Name = "Txtresultado"
        Me.Txtresultado.Size = New System.Drawing.Size(100, 20)
        Me.Txtresultado.TabIndex = 6
        '
        'Rdbsomar
        '
        Me.Rdbsomar.AutoSize = True
        Me.Rdbsomar.Checked = True
        Me.Rdbsomar.Location = New System.Drawing.Point(30, 313)
        Me.Rdbsomar.Name = "Rdbsomar"
        Me.Rdbsomar.Size = New System.Drawing.Size(53, 17)
        Me.Rdbsomar.TabIndex = 8
        Me.Rdbsomar.TabStop = True
        Me.Rdbsomar.Text = "somar"
        Me.Rdbsomar.UseVisualStyleBackColor = True
        '
        'Rdbsubtrair
        '
        Me.Rdbsubtrair.AutoSize = True
        Me.Rdbsubtrair.Location = New System.Drawing.Point(141, 313)
        Me.Rdbsubtrair.Name = "Rdbsubtrair"
        Me.Rdbsubtrair.Size = New System.Drawing.Size(59, 17)
        Me.Rdbsubtrair.TabIndex = 9
        Me.Rdbsubtrair.Text = "subtrair"
        Me.Rdbsubtrair.UseVisualStyleBackColor = True
        '
        'Rdbmultiplicar
        '
        Me.Rdbmultiplicar.AutoSize = True
        Me.Rdbmultiplicar.Location = New System.Drawing.Point(264, 313)
        Me.Rdbmultiplicar.Name = "Rdbmultiplicar"
        Me.Rdbmultiplicar.Size = New System.Drawing.Size(71, 17)
        Me.Rdbmultiplicar.TabIndex = 10
        Me.Rdbmultiplicar.Text = "multiplicar"
        Me.Rdbmultiplicar.UseVisualStyleBackColor = True
        '
        'Rdbdividir
        '
        Me.Rdbdividir.AutoSize = True
        Me.Rdbdividir.Location = New System.Drawing.Point(386, 313)
        Me.Rdbdividir.Name = "Rdbdividir"
        Me.Rdbdividir.Size = New System.Drawing.Size(52, 17)
        Me.Rdbdividir.TabIndex = 11
        Me.Rdbdividir.Text = "dividir"
        Me.Rdbdividir.UseVisualStyleBackColor = True
        '
        'Btnlimpar
        '
        Me.Btnlimpar.Location = New System.Drawing.Point(30, 379)
        Me.Btnlimpar.Name = "Btnlimpar"
        Me.Btnlimpar.Size = New System.Drawing.Size(75, 23)
        Me.Btnlimpar.TabIndex = 12
        Me.Btnlimpar.Text = "limpar"
        Me.Btnlimpar.UseVisualStyleBackColor = True
        '
        'Btncalcular
        '
        Me.Btncalcular.Location = New System.Drawing.Point(141, 379)
        Me.Btncalcular.Name = "Btncalcular"
        Me.Btncalcular.Size = New System.Drawing.Size(75, 23)
        Me.Btncalcular.TabIndex = 13
        Me.Btncalcular.Text = "calcular"
        Me.Btncalcular.UseVisualStyleBackColor = True
        '
        'Btnfechar
        '
        Me.Btnfechar.Location = New System.Drawing.Point(264, 378)
        Me.Btnfechar.Name = "Btnfechar"
        Me.Btnfechar.Size = New System.Drawing.Size(75, 23)
        Me.Btnfechar.TabIndex = 14
        Me.Btnfechar.Text = "fechar"
        Me.Btnfechar.UseVisualStyleBackColor = True
        '
        'GroupBox1
        '
        Me.GroupBox1.Location = New System.Drawing.Point(12, 245)
        Me.GroupBox1.Name = "GroupBox1"
        Me.GroupBox1.Size = New System.Drawing.Size(188, 24)
        Me.GroupBox1.TabIndex = 15
        Me.GroupBox1.TabStop = False
        Me.GroupBox1.Text = "operação matematica"
        '
        'calculadora
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(498, 463)
        Me.Controls.Add(Me.GroupBox1)
        Me.Controls.Add(Me.Btnfechar)
        Me.Controls.Add(Me.Btncalcular)
        Me.Controls.Add(Me.Btnlimpar)
        Me.Controls.Add(Me.Rdbdividir)
        Me.Controls.Add(Me.Rdbmultiplicar)
        Me.Controls.Add(Me.Rdbsubtrair)
        Me.Controls.Add(Me.Rdbsomar)
        Me.Controls.Add(Me.Txtresultado)
        Me.Controls.Add(Me.Txty)
        Me.Controls.Add(Me.Txtx)
        Me.Controls.Add(Me.Label4)
        Me.Controls.Add(Me.Label3)
        Me.Controls.Add(Me.Label2)
        Me.Controls.Add(Me.Label1)
        Me.Name = "calculadora"
        Me.Text = "calculadora"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents Label1 As System.Windows.Forms.Label
    Friend WithEvents Label2 As System.Windows.Forms.Label
    Friend WithEvents Label3 As System.Windows.Forms.Label
    Friend WithEvents Label4 As System.Windows.Forms.Label
    Friend WithEvents Txtx As System.Windows.Forms.TextBox
    Friend WithEvents Txty As System.Windows.Forms.TextBox
    Friend WithEvents Txtresultado As System.Windows.Forms.TextBox
    Friend WithEvents Rdbsomar As System.Windows.Forms.RadioButton
    Friend WithEvents Rdbsubtrair As System.Windows.Forms.RadioButton
    Friend WithEvents Rdbmultiplicar As System.Windows.Forms.RadioButton
    Friend WithEvents Rdbdividir As System.Windows.Forms.RadioButton
    Friend WithEvents Btnlimpar As System.Windows.Forms.Button
    Friend WithEvents Btncalcular As System.Windows.Forms.Button
    Friend WithEvents Btnfechar As System.Windows.Forms.Button
    Friend WithEvents GroupBox1 As System.Windows.Forms.GroupBox

End Class
