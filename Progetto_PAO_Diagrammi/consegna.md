# Progetto Programmazione ad Oggetti – Specifiche e Requisiti

## 📌 Obiettivo del Progetto
Progettazione e sviluppo in **C++** e framework **Qt** di un'applicazione desktop orientata agli oggetti per la creazione, gestione, archiviazione, modifica e visualizzazione grafica di **Charts** (diagrammi di dati, come istogrammi, grafici a linee, diagrammi a torta, ecc.).

---

## 🏗️ Architettura e Pattern di Design
- **Separazione Modello-Vista:** Netta separazione tra il modello logico dei dati e l'interfaccia utente grafica (GUI) secondo il pattern **Model-View-Controller (MVC)** o **Model-View**.
- **Gerarchia di Tipi e Polimorfismo:**
  - Definizione di una gerarchia di classi estensibile per la gestione dei dati e delle diverse tipologie di diagrammi.
  - Utilizzo esplicito di **codice polimorfo** per garantire l'estensibilità del modello logico e grafico.
- **Design Pattern C++:** Integrazione di pattern comportamentali e strutturali (es. *Visitor, Proxy, Bridge, Decorator*) per l'elaborazione e la resa visiva dei dati.

---

## ⚙️ Funzionalità e Requisiti Tecnici

### 1. Gestione Dati e Diagrammi
- Creazione, modifica e gestione dinamica delle componenti numeriche e descrittive di un dataset.
- Supporto a **almeno 3 tipologie differenti di chart** (es. diagrammi a barre, a linee, a torta).

### 2. Interfaccia Grafica (GUI)
- Sviluppata mediante il framework **Qt** (Qt Widgets / Qt Graphics).
- Rendering grafico reattivo che aggiorna le visualizzazioni in base alle modifiche apportate ai dati.

### 3. Archiviazione e I/O
- Salvataggio e caricamento dello stato dei chart da e verso file (es. tramite formati strutturati come **JSON** o **XML**, oppure I/O custom/Qt).

---

## 🛠️ Tech Stack & Toolchain

- **Linguaggio:** C++ (standard C++11 o superiore)
- **Framework GUI:** Qt
- **Build System:** `qmake` (`.pro` file) / `make`
- **IDE di Riferimento:** Qt Creator