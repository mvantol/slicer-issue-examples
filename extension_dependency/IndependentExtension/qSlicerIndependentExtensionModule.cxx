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
#include <vtkSlicerIndependentExtensionLogic.h>

// ExtensionTemplate includes
#include "qSlicerIndependentExtensionModule.h"
#include "qSlicerIndependentExtensionModuleWidget.h"

//-----------------------------------------------------------------------------
Q_EXPORT_PLUGIN2(qSlicerIndependentExtensionModule, qSlicerIndependentExtensionModule);

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_ExtensionTemplate
class qSlicerIndependentExtensionModulePrivate
{
public:
  qSlicerIndependentExtensionModulePrivate();
};

//-----------------------------------------------------------------------------
// qSlicerIndependentExtensionModulePrivate methods

//-----------------------------------------------------------------------------
qSlicerIndependentExtensionModulePrivate::qSlicerIndependentExtensionModulePrivate()
{
}

//-----------------------------------------------------------------------------
// qSlicerIndependentExtensionModule methods

//-----------------------------------------------------------------------------
qSlicerIndependentExtensionModule::qSlicerIndependentExtensionModule(QObject* _parent)
  : Superclass(_parent)
  , d_ptr(new qSlicerIndependentExtensionModulePrivate)
{
}

//-----------------------------------------------------------------------------
qSlicerIndependentExtensionModule::~qSlicerIndependentExtensionModule()
{
}

//-----------------------------------------------------------------------------
QString qSlicerIndependentExtensionModule::helpText()const
{
  return "This is a loadable module bundled in an extension";
}

//-----------------------------------------------------------------------------
QString qSlicerIndependentExtensionModule::acknowledgementText()const
{
  return "This work was was partially funded by NIH grant 3P41RR013218-12S1";
}

//-----------------------------------------------------------------------------
QStringList qSlicerIndependentExtensionModule::contributors()const
{
  QStringList moduleContributors;
  moduleContributors << QString("Jean-Christophe Fillion-Robin (Kitware)");
  return moduleContributors;
}

//-----------------------------------------------------------------------------
QIcon qSlicerIndependentExtensionModule::icon()const
{
  return QIcon(":/Icons/IndependentExtension.png");
}

//-----------------------------------------------------------------------------
QStringList qSlicerIndependentExtensionModule::categories() const
{
  return QStringList() << "Examples";
}

//-----------------------------------------------------------------------------
QStringList qSlicerIndependentExtensionModule::dependencies() const
{
  return QStringList();
}

//-----------------------------------------------------------------------------
void qSlicerIndependentExtensionModule::setup()
{
  this->Superclass::setup();
}

//-----------------------------------------------------------------------------
qSlicerAbstractModuleRepresentation * qSlicerIndependentExtensionModule::createWidgetRepresentation()
{
  return new qSlicerIndependentExtensionModuleWidget;
}

//-----------------------------------------------------------------------------
vtkMRMLAbstractLogic* qSlicerIndependentExtensionModule::createLogic()
{
  return vtkSlicerIndependentExtensionLogic::New();
}
