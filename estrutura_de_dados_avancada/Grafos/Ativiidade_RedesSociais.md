Atividade Redes Sociais

Atividade 1 — Desenhar o grafo
O caderno pede para desenhar seis círculos, um para cada pessoa, e ligar os que são amigos.

Aqui estão as amizades que precisa desenhar:
- Ana — Bruno
- Ana — Carla
- Bruno — Carla
- Bruno — Diego
- Carla — Elisa
- Diego — Elisa
- Diego — Felipe
- Elisa — Felipe

<img width="1920" height="1080" alt="Grafo_RedesSociais" src="https://github.com/user-attachments/assets/1c9264ff-4204-4767-812f-2697072f7969" />

Atividade 2 — Calcular o grau(Vou consertar)

Usuário	Amigos diretos	            Grau
Ana	Bruno e Carla	                  2
Bruno	Ana, Carla e Diego	          3
Carla	Ana, Bruno e Elisa	          3
Diego	Bruno, Elisa e Felipe	      3
Elisa	Carla, Diego e Felipe	      3
Felipe	Diego e Elisa	              2

Pergunta 1: quem tem mais conexões diretas?

Resposta: Bruno, Carla, Diego e Elisa, com 3 conexões cada.
Atividade 3 — Número de amizades
Soma os graus de todos os usuários e divide por 2, porque cada amizade é contada duas vezes.
1. Soma dos graus: 2+3+3+3+3+2=16
2. Divisão por 2: 16\2=8
3. Quantas amizades existem? 8 amizades.

Atividade 4 — Densidade do grafo

Resultado decimal: 0,5333.

Resultado percentual: 53,33%.

Interpretação: a rede tem uma quantidade moderada de conexões possíveis. Ainda existem muitas amizades que poderiam ser feitas.

Atividade 5 — Representar o grafo em Python

rede = {
    "Ana": ["Bruno", "Carla"],
    "Bruno": ["Ana", "Carla", "Diego"],
    "Carla": ["Ana", "Bruno", "Elisa"],
    "Diego": ["Bruno", "Elisa", "Felipe"],
    "Elisa": ["Carla", "Diego", "Felipe"],
    "Felipe": ["Diego", "Elisa"]
}

# Quantidade de usuarios
n = len(rede)

# Grau de cada usuario
for usuario, amigos in rede.items():
    print(usuario, "tem", len(amigos), "conexoes")

# Total de amizades
soma_graus = sum(len(amigos) for amigos in rede.values())
arestas = soma_graus // 2

print("Total de usuarios:", n)
print("Total de amizades:", arestas)

# Densidade do grafo
densidade = (2 * arestas) / (n * (n - 1))
print(f"Densidade: {densidade:.2%}")

Atividade 6 — Encontrar um caminho
O caderno pede um caminho de Ana até Felipe.

Caminho 1:

Ana → Bruno → Diego → Felipe

- Quantidade de arestas: 3.

Outro caminho com a mesma quantidade de arestas:

Ana → Carla → Elisa → Felipe

- Quantidade de arestas: 3.

Atividade 8 — Pergunta de reflexão
Quando duas pessoas têm três amigos em comum, a rede social pode sugerir uma amizade entre elas, pois isso indica que possuem conexões em comum. Porém, é importante respeitar a privacidade dos usuários, proteger seus dados pessoais e permitir que cada pessoa escolha com quem deseja se conectar.
