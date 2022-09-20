def count_madeira(vetor, count, v, tam):
    if v == tam:
        count += 1

    i= 0
    while i < len (vetor):
        if vetor[i] <= tam and vetor[i] != -1:
            tam -= vetor[i]
            vetor[i] = -1

        i += 1

    if tam == 0:
        tam = v

    if (len(set(vetor)) == 1):
        return count
    else:
        return count_madeira(vetor, count, v, tam)




linha = [int(i) for i in input().split()]
N = linha[-1]
linha.pop(-1)

count_madeira(linha, 0, N, N)