import { validaPesoEAltura } from "./modules/calculaImc.js";
import { adicionaNovoPaciente } from "./modules/form.js";
import { deletarPaciente } from "./modules/deletaPaciente.js";

function inicializaApp() {
  validaPesoEAltura();
  adicionaNovoPaciente();
  deletarPaciente();
}

inicializaApp();
