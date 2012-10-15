/*==============================================================================

  Program: 3D Slicer

  Portions (c) Copyright Brigham and Women's Hospital (BWH) All Rights Reserved.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

==============================================================================*/

// Qt includes
#include <QtPlugin>

// ExtensionTemplate Logic includes
#include <vtkSlicerDependentExtensionLogic.h>

// ExtensionTemplate includes
#include "qSlicerDependentExtensionModule.h"
#include "qSlicerDependentExtensionModuleWidget.h"

//-----------------------------------------------------------------------------
Q_EXPORT_PLUGIN2(qSlicerDependentExtensionModule, qSlicerDependentExtensionModule);

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_ExtensionTemplate
class qSlicerDependentExtensionModulePrivate
{
public:
  qSlicerDependentExtensionModulePrivate();
};

//-----------------------------------------------------------------------------
// qSlicerDependentExtensionModulePrivate methods

//-----------------------------------------------------------------------------
qSlicerDependentExtensionModulePrivate::qSlicerDependentExtensionModulePrivate()
{
}

//-----------------------------------------------------------------------------
// qSlicerDependentExtensionModule methods

//-----------------------------------------------------------------------------
qSlicerDependentExtensionModule::qSlicerDependentExtensionModule(QObject* _parent)
  : Superclass(_parent)
  , d_ptr(new qSlicerDependentExtensionModulePrivate)
{
}

//-----------------------------------------------------------------------------
qSlicerDependentExtensionModule::~qSlicerDependentExtensionModule()
{
}

//-----------------------------------------------------------------------------
QString qSlicerDependentExtensionModule::helpText()const
{
  return "This is a loadable module bundled in an extension";
}

//-----------------------------------------------------------------------------
QString qSlicerDependentExtensionModule::acknowledgementText()const
{
  return "This work was was partially funded by NIH grant 3P41RR013218-12S1";
}

//-----------------------------------------------------------------------------
QStringList qSlicerDependentExtensionModule::contributors()const
{
  QStringList moduleContributors;
  moduleContributors << QString("Jean-Christophe Fillion-Robin (Kitware)");
  return moduleContributors;
}

//-----------------------------------------------------------------------------
QIcon qSlicerDependentExtensionModule::icon()const
{
  return QIcon(":/Icons/DependentExtension.png");
}

//-----------------------------------------------------------------------------
QStringList qSlicerDependentExtensionModule::categories() const
{
  return QStringList() << "Examples";
}

//-----------------------------------------------------------------------------
QStringList qSlicerDependentExtensionModule::dependencies() const
{
  return QStringList();
}

//-----------------------------------------------------------------------------
void qSlicerDependentExtensionModule::setup()
{
  this->Superclass::setup();
}

//-----------------------------------------------------------------------------
qSlicerAbstractModuleRepresentation * qSlicerDependentExtensionModule::createWidgetRepresentation()
{
  return new qSlicerDependentExtensionModuleWidget;
}

//-----------------------------------------------------------------------------
vtkMRMLAbstractLogic* qSlicerDependentExtensionModule::createLogic()
{
  return vtkSlicerDependentExtensionLogic::New();
}
