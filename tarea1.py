""" 
Juan David Bernal Maldonado
Segundo semestre
Estructuras de datos
Solución a la tarea 1
"""

################################################################## Punto 1. ##################################################################

mat = [[11, 23, 76, 34, 11],
[14, 30, 92, 30, 101],
[12, 45, 58, 92, 22],
[74, 56, 49, 56, 100],
[99, 5, 28, 47, 99]]  

def verificarDiagonales(matriz):
    ans = True 
    lista = [] 
    lista1 = [] 

    for i in range(len(matriz)): 
        lista.append(matriz[i][i]) 
        lista1.append(matriz[i][-i -1]) 

    if lista1 != lista:
        ans = False 
    
    return ans 

#print(verificarDiagonales(mat))  

################################################################## Punto 2. ################################################################## 

def esCapicua(lista):
    ans = True 
    lista1 = []
    
    for i in range(1, len(lista) + 1):
        lista1.append(lista[-i])  
    
    if lista1 != lista:
        ans = False

    return ans 

#print(esCapicua([42, 12, 90, 90, 12, 42]))
#print(esCapicua([42, 12, 90, 90, 12, 45]))  

################################################################## Punto 3A. ################################################################## 

def diferenciaListas(listaA, listaB): 
    lista = []

    for i in listaA:
        if i not in listaB:
            lista.append(i) 
        else:
            listaB.remove(i) 
    
    return lista 

#print(diferenciaListas([40, 10, 22, 12, 33, 33, 33], [41, 22, 31, 15, 13, 12, 33, 19]))  
#print(diferenciaListas([41, 22, 31, 15, 13, 12, 33, 19], [40, 10, 22, 12, 33, 33, 33]))

################################################################## Punto 3B. ##################################################################

