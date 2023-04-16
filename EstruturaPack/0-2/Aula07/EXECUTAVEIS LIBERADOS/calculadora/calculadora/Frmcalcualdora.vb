Public Class calculadora
    Private Sub soma()
        Dim x, y, resultado As Double
        'entrada de dados 
        x = CDbl(Txtx.Text)
        y = CDbl(Txty.Text)
        resultado = x + y
        Txtresultado.Text = CStr(resultado)

    End Sub

    Private Sub subtrair()
        Dim x, y, resultado As Double
        'entrada de dados 
        x = CDbl(Txtx.Text)
        y = CDbl(Txty.Text)

        resultado = x - y
        Txtresultado.Text = CStr(resultado)
    End Sub

    Private Sub multiplicar()
        Dim x, y, resultado As Double
        'entrada de dados 
        x = CDbl(Txtx.Text)
        y = CDbl(Txty.Text)
        resultado = x * y
        Txtresultado.Text = CStr(resultado)

    End Sub

    Private Sub dividir()
        Dim x, y, resultado As Double
        'entrada de dados 
        x = CDbl(Txtx.Text)
        y = CDbl(Txty.Text)
        If y = 0 Then
            Txtresultado.Text = " divisão por zero"

        Else
            resultado = x / y
            Txtresultado.Text = CStr(resultado)

    End Sub


    Private Sub Btncalcular_Click(sender As Object, e As EventArgs) Handles Btncalcular.Click

        ' verificar qual rdb esta selecionada
        If Rdbsomar.Checked = True Then
            soma()
        ElseIf Rdbsubtrair.Checked Then
            subtrair()
        ElseIf Rdbmultiplicar.Checked Then
            multiplicar()

        Else : dividir()


        End If
    End Sub

    Private Sub Btnlimpar_Click(sender As Object, e As EventArgs) Handles Btnlimpar.Click
        Txtx.Clear()
        Txty.Clear()
        Txtresultado.Clear()
        Txtx.Focus()

    End Sub

    Private Sub Btnfechar_Click(sender As Object, e As EventArgs) Handles Btnfechar.Click
        End
    End Sub
End Class
