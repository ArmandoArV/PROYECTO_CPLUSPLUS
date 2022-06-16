# Proyecto servicio de streaming

## Por: Armando Arredondo Valle

## Descripción del proyecto

Este programa simula un servicio de streaming el cual posee 4 clases, en las cuales se aloja la clase padre (Video), la cual aloja los  atributos de nombre, id, género, duración, así como la calificación.

---

## **Puntos a cubrir**

---

|  **Propiedad** | **Archivo (s)** | **Descripción** |
| --- | --- | --- |
| Herencia | - Padre (Video) - Hijos(Movie,Serie,Episodes) | Tenemos como clase padre Video, la cual está heredando los atributos así como una función virtual para impresión a las demás clases, esto con el fin de que se cumpla el concepto básico de herencia.|
| Polimorfismo | main | Se hace uso de los punteros en la parte del main con el fin de que se cumpla el polimorfismo, para el llamado a los métodos. |
|Sobrecarga|main , Usuario.cpp/h | Se hace uso de la sobrecarga para imprimir el nombre de usuario de quien esté utilizando el servicio de streaming.
---

## Uso de la herencia

Hago uso de la herencia para heredar los mismos atributos de Video a las demás clases, esto con el fin de tener un cierto ahorro de trabajo / más escritura de líneas de código.

```c++
class Movie : public Video{
    // Aquí hacemos uso de la herencia de Video a Movie con el fin de tomar las variables públicas en Video
};
```

---

## **Uso del polimorfismo**

---

Utilizamos polimorfismo con el fin de tener métodos diferentes de impresión, tal es el caso de el print que tiene un diverso número de repeticiones a lo largo del documento.

### **.h donde se inicializa el polimorfismo.**

```c++
class Video{
    public:
        virtual void print(); // Aquí tenemos de forma virtual en el .h de video, al nosotros realizar la parte de la herencia en otros archivos podemos utilizar este método de forma personalizada según se adecue a nuestras necesidades.
};
```

---

## **Sobrecarga**

---

### **Uso de la sobrecarga:**

Se está haciendo uso de la sobrecarga para mostrar el usuario en pantalla, esto ya que en cualquier servicio de streaming es necesario que se despliegue el mismo para poder tener presente quién está viendo qué.

**.h  donde se inicializa la sobrecarga.**

```c++
    // Con esto determinamos la  sobrecarga para imprimir los datos del usuario.
    friend ostream& operator<<(ostream& os, const Usuario& u);

```

**.cpp donde se inicializa la sobrecarga.**

```c++
    // Aquí sobrecargamos la impresión del usuario y el status de su cuenta
    ostream &operator<<(ostream &os, const Usuario &u)
    {
    os << "Usuario: " << u.user << "\n" << " Status: " << u.status << "\n";
    return os;
    }
```

---

## **Casos de prueba**

1) Caso A:  
   Mostrar el catálogo de películas y series.

```c++

    "-------------------------------------------"
    "|                                         |"
    "|                                         |" "|                                         |"
    "|       Welcome to the Video Library!     |"
    "|                                         |"
    "|                                         |"
    "-------------------------------------------"
    "Please select one of the following options:"
    "   [1] View all the catalogue"
    "   [2] Watch a movie"
    "   [3] Watch a serie"
    "   [4] Show movies based on rating"
    "   [5] Show series based on rating"
    "   [6] Rate a movie or a serie"
    "   [0] Exit"
    "Please enter an option: "
    ```
