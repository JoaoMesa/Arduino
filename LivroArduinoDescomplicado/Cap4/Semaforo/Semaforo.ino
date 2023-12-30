  int Red = 10;
  int Green = 9;
  int Yellow = 8;

  class Semaforo {
  public:
    // Construtor
    Semaforo();

    void passarEstado();
    void ligar();
    int estado;
    int tempo[3] = {1000, 2000, 2000};
  };

  // Implementação dos métodos da classe Semaforo
  Semaforo::Semaforo() {
    // Inicializa o estado como falso por padrão
    estado = Red;
  }

  void Semaforo::passarEstado() {
    if(estado == Yellow)
      estado = Red;
    else
      estado--;
  }

  void Semaforo::ligar(){
    digitalWrite(estado, HIGH);
    delay(tempo[estado-8]);
    digitalWrite(estado, LOW);
  }

  // Criando um objeto Semaforo
  Semaforo meuSemaforo;

  void setup() {
    // put your setup code here, to run once:
    pinMode(Red, OUTPUT);
    pinMode(Green, OUTPUT);
    pinMode(Yellow, OUTPUT);
  }  

  void loop() {
    // put your main code here, to run repeatedly:
    meuSemaforo.ligar();
    meuSemaforo.passarEstado();
  }
