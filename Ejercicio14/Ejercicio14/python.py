with open('miarchivo.txt', 'a') as archivo:
    nueva_linea = input("Digite la nueva linea: ")
    archivo.write(nueva_linea + '\n')

print("Nueva línea escrita en el archivo.")
