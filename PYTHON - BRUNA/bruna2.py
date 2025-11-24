import sys
from Bio.Seq import Seq
from Bio import SeqIO
from Bio.SeqUtils import gc_fraction

# Corrigir acentuação no Windows 
try:
    sys.stdout.reconfigure(encoding='utf-8')
except:
    pass


def salvar_resultado(nome, conteudo):
    with open(nome, "w", encoding="utf-8") as f:
        f.write(str(conteudo))
    print(f"\nResultado salvo no arquivo: {nome}\n")


def ler_fasta(caminho):
    try:
        registros = list(SeqIO.parse(caminho, "fasta"))
        if not registros:
            print("Nenhuma sequência encontrada no arquivo FASTA!")
            return None
        return str(registros[0].seq).upper()
    except Exception as e:
        print("Erro ao ler FASTA:", e)
        return None


while True:  # LOOP EXTERNO → permite reiniciar com novo FASTA ou nova sequência

    print("\n=== Carregamento da sequência ===")
    print("1 - Ler sequência de um arquivo FASTA")
    print("2 - Digitar a sequência manualmente")
    print("0 - Encerrar o programa")
    op = input("Escolha: ").strip()

    if op == "0":
        print("\nPrograma encerrado.")
        break

    elif op == "1":
        caminho = input("Digite o nome do arquivo FASTA: ").strip()
        dna = ler_fasta(caminho)
        if dna is None:
            continue

    elif op == "2":
        dna = input("Digite a sequência de DNA (A, T, C, G): ").strip().upper()

    else:
        print("Opção inválida!")
        continue

    # Validação
    if len(dna) == 0:
        print("Sequência vazia.")
        continue

    for base in dna:
        if base not in "ATCG":
            print("\nSequência inválida! Use apenas A, T, C, G.")
            continue

    seq = Seq(dna)

    # LOOP INTERNO → menu de operações
    while True:
        print("\n===== MENU DE OPERAÇÕES =====")
        print("1. Transcrever o DNA para RNA.")
        print("2. Traduzir o DNA para proteína.")
        print("3. Exibir a sequência complementar.")
        print("4. Calcular o conteúdo GC da sequência.")
        print("5. Verificar se uma subsequência (ou gene) está presente no DNA.")
        print("6. Carregar outra sequência (voltar ao menu principal).")
        print("0. Encerrar o programa.")
        print("==============================\n")

        n = input("Opção: ").strip()

        if n == "1":
            rna = seq.transcribe()
            print("\nRNA transcrito:\n", rna)
            salvar_resultado("rna.txt", rna)

        elif n == "2":
            proteina = seq.translate(to_stop=True)
            print("\nProteína traduzida:\n", proteina)
            salvar_resultado("proteina.txt", proteina)

        elif n == "3":
            complemento = seq.complement()
            print("\nSequência complementar:\n", complemento)
            salvar_resultado("complemento.txt", complemento)

        elif n == "4":
            gc = gc_fraction(seq) * 100
            print(f"\nConteúdo GC: {gc:.2f}%")
            salvar_resultado("gc_porcentagem.txt", f"GC = {gc:.2f}%")

        elif n == "5":
            sub = input("Digite a subsequência a procurar: ").strip().upper()
            presente = sub in dna

            if presente:
                print("\nA subsequência está presente no DNA.")
            else:
                print("\nA subsequência NÃO foi encontrada.")

            salvar_resultado("busca_subsequencia.txt",
                             f"Subsequência '{sub}' está presente? -> {presente}")

        elif n == "6":
            print("\nVoltando ao menu principal para carregar nova sequência...\n")
            break  # volta ao LOOP EXTERNO

        elif n == "0":
            print("\nPrograma encerrado.")
            exit()

        else:
            print("Opção inválida! Escolha entre 0 e 6.")
