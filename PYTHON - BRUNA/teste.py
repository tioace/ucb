# Programa basico para calcular GC de uma sequencia
from Bio import SeqIO
from Bio.SeqUtils import gc_fraction

# Tenta ler o arquivo
try:
    # Lendo o arquivo FASTA
    registros = list(SeqIO.parse("seq.fasta", "fasta"))
    
    # Pegando o primeiro registro
    primeiro = registros[0]
    sequencia = primeiro.seq
    
    print("Informacoes da sequencia:")
    print("Nome:", primeiro.description)
    print("Tamanho:", len(sequencia), "aminoacidos")
    
    # Calculando GC
    gc = gc_fraction(sequencia) * 100
    print("Conteudo GC: %.2f%%" % gc)
    
except:
    print("Nao foi possivel ler o arquivo 'seq.fasta'")
    print("Verifique se o arquivo esta na mesma pasta")