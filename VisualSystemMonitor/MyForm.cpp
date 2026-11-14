#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace VisualSystemMonitor;


[STAThreadAttribute]
int main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Создаем и запускаем нашу форму 
    MyForm form;
    Application::Run(% form);

    return 0;
}