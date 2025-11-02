# Padrões de Projeto

Este repositório tem como propósito apresentar **exemplos práticos** de cada **padrão de projeto** (Design Pattern), contendo uma **implementação básica** de cada um.  

O objetivo é **auxiliar os alunos da disciplina** na compreensão e implementação dos padrões de projeto em seus trabalhos acadêmicos.

Os exemplos seguirão a risca o livro **"Padrões de Projeto - Soluções Reutilizaveis de Software Orientado a Objetos"** feito pelo GOF.
---

## 🧱 Padrões Criacionais (Creational Patterns)

- **Abstract Factory**
- **Builder**
- **Factory Method**
- **Prototype**
- **Singleton**

---

## 🧩 Padrões Estruturais (Structural Patterns)

- **Adapter**
- **Bridge**
- **Composite**
- **Decorator**
- **Facade**
- **Flyweight**
- **Proxy**

---

## ⚙️ Padrões Comportamentais (Behavioral Patterns)

- **Chain of Responsibility**
- **Command**
- **Interpreter**
- **Iterator**
- **Mediator**
- **Memento**
- **Observer**
- **Strategy**
- **Template Method**
- **Visitor**

---

## 📚 Observações

Cada padrão contará com:
- Uma breve descrição teórica;
- Um diagrama UML(Seguindo o padrão do GOF);
- Um exemplo de código simples;

---

## 🚀 Como rodar

### 📋 Pré-requisitos

Para rodar e compilar será necessário:

- **Compilador C++ (GCC/MinGW)**
- **MinGW Make**
- **Git**
- **CMake**

### ✅ Verificando a instalação

Antes de tudo, verifique se o `g++` e o `mingw32-make` estão no PATH do seu sistema:
```bash
g++ --version
mingw32-make --version
cmake --version
```

---

### 🔧 Instalação do SFML 3.0

#### 1️⃣ Clone o código-fonte do SFML

Crie um diretório para clonar o SFML e abra com o terminal:
```bash
mkdir SFMLSourceCode
cd SFMLSourceCode
git clone https://github.com/SFML/SFML.git
cd SFML
```

#### 2️⃣ Configure o build com CMake

Crie um diretório de build:
```bash
mkdir build
cd build
```

Configure com o CMake:
```bash
cmake .. -G "MinGW Makefiles"
```

**⚠️ Problema com Clang?**  
Se você tiver o Clang instalado e ocorrer erro de compiladores diferentes para C e C++, force o uso do GCC:
```bash
cmake .. -G "MinGW Makefiles" -DCMAKE_C_COMPILER=gcc -DCMAKE_CXX_COMPILER=g++
```

#### 3️⃣ Compile o SFML

Após configurar o CMake, rode o Makefile:
```bash
mingw32-make
```

⏳ *Este processo pode levar alguns minutos...*

#### 4️⃣ Instale o SFML
```bash
mingw32-make install
```

✅ Isso instalará o SFML na pasta `C:\Program Files (x86)\SFML`

---

### ▶️ Compilando e executando os projetos

Os passos acima só precisam ser feitos uma única vez
Após instalar o SFML, você pode compilar qualquer padrão de projeto:


#### 1. Navegue até o diretório do padrão desejado
```bash
cd Observer
# ou
cd Singleton
# etc...
```

#### 2. Compile o projeto
```bash
mingw32-make
```

#### 3. Execute o programa
```bash
mingw32-make run
# ou
bin/app.exe
```

---

### 🛠️ Comandos úteis do Makefile

| Comando | Descrição |
|---------|-----------|
| `make` ou `make all` | Compila o projeto |
| `make run` | Compila e executa |
| `make clean` | Remove arquivos compilados |
| `make rebuild` | Limpa e recompila tudo |

---

### 📁 Estrutura dos projetos

Cada padrão de projeto segue esta estrutura:
```
Padrão/
├── makefile          # Configuração de build
├── main.cpp          # Ponto de entrada
├── src/              # Código-fonte (.cpp)
├── include/          # Headers (.h/.hpp)
├── build/            # Arquivos objeto (gerado automaticamente)
└── bin/              # Executável final (gerado automaticamente)
```

---

## ❓ Solução de Problemas


### ❌ "Cannot find entry point no make"
- Verifique se o seu GCC está pelo menos na versão 15.2.0

### ❌ "undefined reference to WinMain"
- Certifique-se de que existe um arquivo `main.cpp` com a função `int main()`

### ❌ "cannot find -lsfml-graphics-s"
- Verifique se o SFML foi instalado corretamente em `C:\Program Files (x86)\SFML`
- Execute `dir "C:\Program Files (x86)\SFML\lib"` para verificar as bibliotecas

### ❌ Erros de compilação C++20
- Certifique-se de que seu GCC é versão 10 ou superior: `g++ --version`

---

## 📝 Notas Técnicas

- Este projeto usa **SFML 3.0** que requer **C++20**
- As bibliotecas são linkadas **estaticamente** (`-s`)
- Testado no Windows 11 com MinGW-w64 GCC 15.2.0