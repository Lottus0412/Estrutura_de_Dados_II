Atividade 1 ------------------------------------------------------------------------------------------------------------------------------------------------------
numeros = []

# Solicita 10 números ao usuário
for i in range(10):
    numero = int(input(f"Digite o {i + 1}º número: "))
    numeros.append(numero)

# Exibe todos os números
print("\nNúmeros digitados:")
print(numeros)

# Soma
soma = sum(numeros)

# Média
media = soma / len(numeros)

# Maior e menor
maior = max(numeros)
menor = min(numeros)

# Quantidade de números pares
pares = 0

for numero in numeros:
    if numero % 2 == 0:
        pares += 1

print("Soma:", soma)
print("Média:", media)
print("Maior valor:", maior)

Atividade 2-------------------------------------------------------------------------------------------------------------------------------------------------------
matriz = []

# Solicita os valores da matriz 3x3
for i in range(3):
    linha = []

    for j in range(3):
        valor = int(input(f"Digite o valor [{i}][{j}]: "))
        linha.append(valor)

    matriz.append(linha)

# Exibe a matriz
print("\nMatriz:")

for linha in matriz:
    print(linha)

# Soma de todos os elementos
soma = 0

for i in range(3):
    for j in range(3):
        soma += matriz[i][j]

# Soma da diagonal principal
soma_diagonal = 0

for i in range(3):
    soma_diagonal += matriz[i][i]

# Maior elemento
maior = matriz[0][0]

for i in range(3):
    for j in range(3):
        if matriz[i][j] > maior:
            maior = matriz[i][j]

print("Soma de todos os elementos:", soma)
print("Soma da diagonal principal:", soma_diagonal)
print("Maior elemento:", maior)

Atividade 3--------------------------------------------------------------------------------------------------------------------------------------------------------
livro = {}

# Lê os dados
livro["titulo"] = input("Digite o título do livro: ")
livro["autor"] = input("Digite o autor do livro: ")
livro["ano"] = int(input("Digite o ano de publicação: "))
livro["preco"] = float(input("Digite o preço do livro: "))

# Exibe os dados
print("\nDados do livro:")
print("Título:", livro["titulo"])
print("Autor:", livro["autor"])
print("Ano:", livro["ano"])
print("Preço:", livro["preco"])

# Altera o preço
novo_preco = float(input("\nDigite o novo preço: "))
livro["preco"] = novo_preco

# Adiciona a categoria
livro["categoria"] = input("Digite a categoria do livro: ")

# Exibe o dicionário atualizado
print("\nLivro atualizado:")
print(livro)

Atividade 4-------------------------------------------------------------------------------------------------------------------------------------------------------
from dataclasses import dataclass


@dataclass
class Aluno:
    nome: str
    matricula: int
    nota1: float
    nota2: float

    def media(self):
        return (self.nota1 + self.nota2) / 2


aluno = Aluno(
    "Maria",
    12345,
    8.0,
    9.0
)

print("Nome:", aluno.nome)
print("Matrícula:", aluno.matricula)
print("Nota 1:", aluno.nota1)
print("Nota 2:", aluno.nota2)
print("Média:", aluno.media())

Atividade 5 ------------------------------------------------------------------------------------------------------------------------------------------------------
from dataclasses import dataclass


@dataclass
class Aluno:
    nome: str
    matricula: int
    nota1: float
    nota2: float

    def media(self):
        return (self.nota1 + self.nota2) / 2


alunos = []

# Cadastro de 5 alunos
for i in range(5):
    print(f"\nCadastro do {i + 1}º aluno")

    nome = input("Nome: ")
    matricula = int(input("Matrícula: "))
    nota1 = float(input("Nota 1: "))
    nota2 = float(input("Nota 2: "))

    aluno = Aluno(nome, matricula, nota1, nota2)
    alunos.append(aluno)


# Exibe a média de cada aluno
print("\nMédias dos alunos:")

for aluno in alunos:
    print(aluno.nome, "- Média:", aluno.media())


# Exibe os alunos aprovados
print("\nAlunos aprovados:")

for aluno in alunos:
    if aluno.media() >= 7.0:
        print(aluno.nome, "- Média:", aluno.media())


# Encontra o aluno com maior média
maior_aluno = alunos[0]

for aluno in alunos:
    if aluno.media() > maior_aluno.media():
        maior_aluno = aluno

print("\nAluno com maior média:")
print(maior_aluno.nome)
print("Média:", maior_aluno.media())

print("Menor valor:", menor)
print("Quantidade de números pares:", pares)

Desafio integrador — Sistema de estoque---------------------------------------------------------------------------------------------------------------------------
from dataclasses import dataclass


@dataclass
class Produto:
    codigo: int
    nome: str
    preco: float
    quantidade: int


produtos = []


def cadastrar_produto():
    print("\n CADASTRAR PRODUTO ")

    codigo = int(input("Código: "))

    # Verifica se o código já existe
    for produto in produtos:
        if produto.codigo == codigo:
            print("Já existe um produto com esse código!")
            return

    nome = input("Nome: ")
    preco = float(input("Preço: "))
    quantidade = int(input("Quantidade: "))

    produto = Produto(codigo, nome, preco, quantidade)
    produtos.append(produto)

    print("Produto cadastrado com sucesso!")


def listar_produtos():
    print("\nLISTA DE PRODUTOS")

    if len(produtos) == 0:
        print("Nenhum produto cadastrado.")
        return

    for produto in produtos:
        print("-------------------------")
        print("Código:", produto.codigo)
        print("Nome:", produto.nome)
        print("Preço: R$", produto.preco)
        print("Quantidade:", produto.quantidade)


def buscar_produto():
    print("\n BUSCAR PRODUTO")

    codigo = int(input("Digite o código do produto: "))

    for produto in produtos:
        if produto.codigo == codigo:
            print("\nProduto encontrado!")
            print("Código:", produto.codigo)
            print("Nome:", produto.nome)
            print("Preço: R$", produto.preco)
            print("Quantidade:", produto.quantidade)
            return

    print("Produto não encontrado.")


def valor_total_estoque():
    print("\n VALOR TOTAL DO ESTOQUE ")

    total = 0

    for produto in produtos:
        total += produto.preco * produto.quantidade

    print("Valor total do estoque: R$", total)


def produto_mais_caro():
    print("\n PRODUTO MAIS CARO")

    if len(produtos) == 0:
        print("Nenhum produto cadastrado.")
        return

    mais_caro = produtos[0]

    for produto in produtos:
        if produto.preco > mais_caro.preco:
            mais_caro = produto

    print("Produto:", mais_caro.nome)
    print("Código:", mais_caro.codigo)
    print("Preço: R$", mais_caro.preco)
    print("Quantidade:", mais_caro.quantidade)


# Menu principal
while True:
    print("\n SISTEMA DE ESTOQUE")
    print("1 - Cadastrar produto")
    print("2 - Listar produtos")
    print("3 - Buscar produto")
    print("4 - Valor total do estoque")
    print("5 - Produto mais caro")
    print("0 - Sair")

    opcao = input("Escolha uma opção: ")

    if opcao == "1":
        cadastrar_produto()

    elif opcao == "2":
        listar_produtos()

    elif opcao == "3":
        buscar_produto()

    elif opcao == "4":
        valor_total_estoque()

    elif opcao == "5":
        produto_mais_caro()

    elif opcao == "0":
        print("Sistema encerrado.")
        break

    else:
        print("Opção inválida!")
