from unittest import TestCase
import jokenpo_diferentao.jogo as jogo

class TesteDoJoKenPo(TestCase):

    def teste_de_exemplo(self):
        a = 1
        b = 2
        esperado = 3

        resultado = jogo.somar(a, b)

        self.assertEqual(resultado, esperado)
