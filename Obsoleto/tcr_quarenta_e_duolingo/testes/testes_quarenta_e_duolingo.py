from unittest import TestCase
import negocio.quarenta_e_duolingo as negocio

class TesteDeExemplo(TestCase):

    def teste_de_exemplo(self):
        a = 20
        b = 25
        esperado = 45

        calculado = negocio.somar(a, b)

        self.assertEqual(esperado, calculado)