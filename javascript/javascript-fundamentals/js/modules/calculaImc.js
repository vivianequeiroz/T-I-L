export function validaPesoEAltura() {
  let pacientes = document.querySelectorAll(".paciente");
  let totalPacientes = pacientes.length;

  const mensagemPesoInvalido = "Peso inválido!";
  const mensagemAlturaInvalida = "Altura inválida!";

  let contador = 0;

  for (contador; contador < totalPacientes; contador++) {
    let paciente = pacientes[contador];

    let peso = paciente.querySelector(".info-peso");
    let pesoPaciente = peso.textContent;

    let pesoInformadoValido = validaPeso(peso);
    let alturaInformadaValida = validaAltura(altura);

    let altura = paciente.querySelector(".info-altura");
    let alturaPaciente = altura.textContent;

    let imc = paciente.querySelector(".info-imc");

    if (!pesoInformadoValido) {
      console.log(mensagemPesoInvalido);
      pesoValido = false;
      imc.textContent = mensagemPesoInvalido;
    }

    if (!alturaInformadaValida) {
      console.log(mensagemAlturaInvalida);
      alturaValida = false;
      imc.textContent = mensagemAlturaInvalida;
    }

    if (pesoValido && alturaValida) {
      imc.textContent = calculaImc(pesoPaciente, alturaPaciente);
    }
  }
}

function validaPeso(peso) {
  const pesoMaximo = 500;
  let pesoEhValido = false;

  if (peso >= 0.2 && peso < pesoMaximo) {
    pesoEhValido = true;
    return pesoEhValido;
  }
  return pesoEhValido;
}

function validaAltura(altura) {
  const alturaMaxima = 2.5;
  let alturaEhValida = false;

  if (altura >= 0.3 && altura < alturaMaxima) {
    alturaEhValida = true;
    return alturaEhValida;
  }
  return alturaEhValida;
}

export function calculaImc(peso, altura) {
  let imcTotal = peso / (altura * altura);
  return imcTotal.toFixed(2);
}
