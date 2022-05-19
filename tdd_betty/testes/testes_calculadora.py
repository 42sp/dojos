from unittest import TestCase
import negocio.calculadora

class TestesDaCalculadora(TestCase):

    def teste_soma_1_e_2_retorna_3(self):
        a = 1
        b = 2
        esperado = 3

        resultado = negocio.calculadora.somar(a, b)

        self.assertEqual(resultado, esperado)