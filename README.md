*This project has been created as part of the 42 curriculum by nbulbul.*

# Libft
# TR
## Açıklama

Libft, 42 müfredatı kapsamında geliştirdiğim ilk özel C kütüphanesidir.  
Bu projenin amacı, standart C kütüphanesindeki (libc) temel fonksiyonları yeniden yazmak ve ilerideki projelerde kullanabileceğim yardımcı fonksiyonlardan oluşan bir kütüphane oluşturmaktır.

Bu fonksiyonları sıfırdan yazarak bellek yönetimi, string işlemleri ve bağlı liste (linked list) yapısını daha iyi anlamayı hedefledim.

Kütüphane `libft.a` isimli statik bir dosya olarak oluşturulur.

---

## Kütüphane İçeriği

Kütüphane üç ana bölümden oluşmaktadır:

---

### 1️⃣ Libc Fonksiyonları (Yeniden Yazılanlar)

Aşağıdaki standart C fonksiyonları yeniden implemente edilmiştir:

**Karakter kontrol fonksiyonları:**
- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`

**String fonksiyonları:**
- `ft_strlen`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_strnstr`

**Bellek fonksiyonları:**
- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_memchr`
- `ft_memcmp`

**Dönüşüm ve bellek tahsis fonksiyonları:**
- `ft_atoi`
- `ft_calloc`
- `ft_strdup`

Tüm fonksiyonlar orijinal libc fonksiyonlarıyla aynı davranışı göstermektedir ancak isimlerinin başında `ft_` öneki bulunmaktadır.

---

### 2️⃣ Ek Fonksiyonlar

Libc’de doğrudan bulunmayan veya farklı formatta bulunan yardımcı fonksiyonlar:

- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_itoa`
- `ft_strmapi`
- `ft_striteri`
- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

Bu fonksiyonlar özellikle string işleme, bellek tahsisi ve file descriptor’a yazma işlemlerine odaklanmaktadır.

---

### 3️⃣ Linked List Fonksiyonları

Projede tek yönlü bağlı liste (singly linked list) implementasyonu yapılmıştır.

Kullanılan yapı:

```c
typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;
````

İmplement edilen liste fonksiyonları:

* `ft_lstnew`
* `ft_lstadd_front`
* `ft_lstsize`
* `ft_lstlast`
* `ft_lstadd_back`
* `ft_lstdelone`
* `ft_lstclear`
* `ft_lstiter`
* `ft_lstmap`

Bu fonksiyonlar sayesinde liste oluşturma, başa/sona eleman ekleme, liste uzunluğunu hesaplama, eleman silme, listeyi tamamen temizleme ve içerik üzerinde işlem yapma gibi işlemler gerçekleştirilebilmektedir.

---

## Talimatlar

Projeyi derlemek için:

```bash
make
```

Bu komut `libft.a` dosyasını oluşturur.

Makefile komutları:

* `make` veya `make all` → Kütüphaneyi derler
* `make clean` → Object dosyalarını siler
* `make fclean` → Object dosyalarını ve `libft.a` dosyasını siler
* `make re` → Temizleyip yeniden derler

Derleme bayrakları:

```
-Wall -Wextra -Werror
```

Kütüphane `ar` komutu kullanılarak oluşturulmuştur.

---

## Kullanım

Başka bir projede kullanmak için:

1️⃣ Header dosyasını ekleyin:

```c
#include "libft.h"
```

2️⃣ Derleme sırasında kütüphaneyi ekleyin:

```bash
cc main.c libft.a
```

---

## Teknik Notlar

* Global değişken kullanılmamıştır.
* Tüm bellek tahsisleri kontrol edilmiştir.
* Bellek sızıntısı (memory leak) bulunmamaktadır.
* Tüm dosyalar repository root dizinindedir.
* Proje 42 Norm kurallarına uygun şekilde yazılmıştır.
* Kütüphane `ar` komutu ile oluşturulmuştur.

---

## Kaynaklar

* `man` sayfaları
* GNU C Library dokümantasyonu
* 42 proje subject dosyası
* The C Programming Language 

---

## AI Kullanımı

AI aşağıdaki amaçlarla kullanılmıştır:

* Bazı fonksiyonların man sayfası davranışlarını daha iyi anlamak
* Edge-case durumlarını kontrol etmek

Tüm implementasyonlar tarafımdan yazılmış ve mantığı anlaşılmıştır.

# ENG
## Description

Libft is my first custom C library developed as part of the 42 curriculum.  
The goal of this project is to reimplement common standard C library (libc) functions and create additional utility functions that will be useful in future projects.

By rewriting these functions from scratch, I aimed to better understand how memory management, string manipulation, and linked list structures work in C.

The library is compiled into a static library file called `libft.a`.

---

## Library Content

This library includes three main parts:

### 1️⃣ Libc Functions (Reimplemented)

Reimplementation of standard C functions such as:

**Character checks:** 
- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
**String functions:**
- `ft_strlen`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_strnstr`
**Memory functions:**
- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_memchr`
- `ft_memcmp`

**Conversion and Memory allocatins:**
- `ft_atoi`
- `ft_calloc`
- `ft_strdup`

All functions behave like the original ones but are prefixed with `ft_`.

---

### 2️⃣ Additional Functions

New utility functions not directly included in libc:

- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_itoa`
- `ft_strmapi`
- `ft_striteri`
- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

These functions focus mainly on string handling and file descriptor output.

---

### 3️⃣ Linked List Functions

Implementation of a singly linked list using the structure:

```c
typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;
````

List functions include:

* ft_lstnew
* ft_lstadd_front
* ft_lstsize
* ft_lstlast
* ft_lstadd_back
* ft_lstdelone
* ft_lstclear
* ft_lstiter
* ft_lstmap

These functions allow creation, manipulation, iteration, and deletion of linked lists.

---

## Instructions

To compile the library:

```bash
make
```

This will generate:

`libft.a`

Available Makefile rules:

* `make` or `make all` → compile the library
* `make clean` → remove object files
* `make fclean` → remove object files and `libft.a`
* `make re` → clean and recompile

Compilation flags used:

-Wall -Wextra -Werror

---

## Usage

To use the library in another project:

1️⃣Include the header file:

```c
#include "libft.h"
```

2️⃣Compile with:

```bash
cc main.c libft.a
```

---

## Technical Notes

* No global variables were used.
* All memory allocations are properly freed.
* The library is created using the ar command.
* All files are placed at the root of the repository.
* The project follows the 42 Norm.

---

## Resources

* `man` pages for standard C functions
* The GNU C Library documentation
* 42 Intranet project subject
* C Programming Language

---

## AI Usage

AI was used only for:

* Clarifying function behaviors from man pages
* Understanding edge cases (especially for memory functions)

All implementations and logic were written and understood by me.
