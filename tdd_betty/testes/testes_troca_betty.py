from unittest import TestCase
import negocio.troca_betty

# Qualquer nome próprio deve ser trocado por Betty

# Lula
# Meu nome tbm é betty -> Felipe
# Meu nome tbmé betty -> Noé
# Meu nome tmb é betty -> Victor
# Meu nome tmb é betty -> Laura
class TestsDaBetty(TestCase):

# Arrange
# Act
# Assert

    # ARRANGE
    def test_Felipe_retorna_Betty(self):
        nome = 'Felipe'
        resultado_esperado = 'Betty'
        # ACT
        resultado = negocio.troca_betty.trocar(nome)
        # ASSERT
        self.assertEqual(resultado, resultado_esperado)
    
    # ARRANGE
    def test_Noé_retorna_Betty(self):
        nome = 'Noé'
        esperado = 'Betty'
        # ACT
        resultado = negocio.troca_betty.trocar(nome)
        # ASSERT
        self.assertEqual(resultado, esperado)
    
    def test_Victor_e_Noe_retorna_Betty_e_Betty(self):
        frase = 'Victor e Noe'
        esperado = 'Betty e Betty'
        #ACT
        resultado = negocio.troca_betty.trocar(frase)
        # ASSERT
        self.assertEqual(resultado, esperado)

    def test_alameda_Yaya_retorna_alameda_Betty(self):
        frase = 'alameda Yaya'
        esperado = 'alameda Betty'
        #ACT
        resultado = negocio.troca_betty.trocar(frase)
        # ASSERT
        self.assertEqual(resultado, esperado)
