from unittest import TestCase
import negocio.palavra as negocio

# Se a letra está no lugar certo *
# Se a letra está no lugar errado -
# Se a letra não existe na palavra X

class TesteDeExemplo(TestCase):

    def teste_palavra_lula_chute_doria_retorna_a(self):
        a = 20
        b = 25
        esperado = 45

        calculado = negocio.somar(a, b)

        self.assertEqual(esperado, calculado)