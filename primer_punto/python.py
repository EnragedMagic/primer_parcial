# ordenar.py

def ordenar(calificaciones):
    for i in range(1, len(calificaciones)):
        key = calificaciones[i]
        j = i - 1
        while j >= 0 and calificaciones[j] > key:
            calificaciones[j + 1] = calificaciones[j]
            j -= 1
        calificaciones[j + 1] = key
    return calificaciones

if __name__ == "__main__":
    calificaciones = [4.5, 3.2, 5.0, 2.8, 4.0]
    print(ordenar(calificaciones))
