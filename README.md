# 🖥️ Visual System Monitor

![Platform](https://img.shields.io/badge/Platform-Windows-0078D6?style=flat-square&logo=windows)
![Language](https://img.shields.io/badge/Language-C%2B%2B%2FCLI-00599C?style=flat-square&logo=c%2B%2B)
![UI](https://img.shields.io/badge/UI-WinForms-5C2D91?style=flat-square)
![Standard](https://img.shields.io/badge/C%2B%2B-17-blue?style=flat-square)

Легковесная десктопная утилита для мониторинга аппаратных ресурсов и сетевой конфигурации Windows в реальном времени. Проект объединяет низкоуровневый нативный бэкенд на C++ (WinAPI / Winsock) и графический интерфейс на базе Windows Forms.

---

## 📸 Скриншот прошлого дизайна


![Visual System Monitor old UI](assets/old.jpg)



## 📸 Скриншот нового дизайна


![Visual System Monitor new UI](assets/new.jpg)

---

## ✨ Возможности

* **Мониторинг процессора и памяти:** получение информации об архитектуре ЦП, количестве логических ядер и текущем состоянии оперативной памяти (ОЗУ) через `WinAPI`.
* **Анализ дискового пространства:** отслеживание доступного и занятого объема накопителей с использованием библиотеки `std::filesystem` (C++20).
* **Сетевая диагностика:** определение имени хоста и локальных IP-адресов с помощью сокетов Windows (`Winsock2`).
* **Портативность:** приложение собрано в конфигурации `Release` как автономный оконный `.exe`-файл (`/SUBSYSTEM:WINDOWS`) без фоновой консоли.

---

## 🚀 Быстрый запуск (Для пользователей)

1. Перейдите в раздел **[Releases](https://github.com/VLDLab/VisualSystemMonitor/releases)** справа.
2. Скачайте актуальную версию `VisualSystemMonitor.exe` (или ZIP-архив).
3. Запустите файл.
   * *Примечание:* Поскольку бинарный файл не подписан платным коммерческим сертификатом, при первом запуске Windows SmartScreen может показать предупреждение. Нажмите **«Подробнее»** ➔ **«Выполнить в любом случае»**.

---

## 🛠️ Сборка из исходного кода (Для разработчиков)

### Требования
* **ОС:** Windows 10 / 11 (x64)
* **IDE:** Visual Studio 2022 (с установленным компонентом *«Разработка классических приложений на C++»* и поддержкой **C++/CLI**)
* **Windows SDK:** 10.0 или новее

### Инструкция по сборке
1. Клонируйте репозиторий:
   ```bash
   git clone [https://github.com/VLDLab/VisualSystemMonitor.git](https://github.com/VLDLab/VisualSystemMonitor.git)
