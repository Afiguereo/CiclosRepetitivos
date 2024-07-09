
int main() {
        for (int i = 17; i >= 1; i--) {
        if (i % 2 != 0 && i != 15) {
            printf("%d ", i);
        }
    }
    
    printf("\n");

    return 0;
}


int main() {
    int numero;
    
    printf("Ingrese un número para ver su tabla de multiplicación: ");
    scanf("%d", &numero);
    
       int i = 1;
    
      do {
        printf("%d x %d = %d\n", numero, i, numero * i);
        i++;
    } while (i <= 10); 
    
    return 0;
}
int main() {
    int edad;
    int mayores = 0;
    int menores = 0;
           for (int i = 1; i <= 10; i++) {
        printf("Ingrese la edad de la persona %d: ", i);
        scanf("%d", &edad);
                       if (edad >= 18) {
            mayores++;
        } else {
            menores++;
        }
    }
     printf("\nPersonas mayores de edad: %d\n", mayores);
    printf("Personas menores de edad: %d\n", menores);
    
    return 0;
}
