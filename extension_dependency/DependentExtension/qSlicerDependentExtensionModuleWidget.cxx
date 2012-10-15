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
#include <QDebug>

// SlicerQt includes
#include "qSlicerDependentExtensionModuleWidget.h"
#include "ui_qSlicerDependentExtensionModule.h"

// Other includes
#include "vtkSlicerIndependentExtensionLogic.h"

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_ExtensionTemplate
class qSlicerDependentExtensionModuleWidgetPrivate: public Ui_qSlicerDependentExtensionModule
{
public:
  qSlicerDependentExtensionModuleWidgetPrivate();
};

//-----------------------------------------------------------------------------
// qSlicerDependentExtensionModuleWidgetPrivate methods

//-----------------------------------------------------------------------------
qSlicerDependentExtensionModuleWidgetPrivate::qSlicerDependentExtensionModuleWidgetPrivate()
{
}

//-----------------------------------------------------------------------------
// qSlicerDependentExtensionModuleWidget methods

//-----------------------------------------------------------------------------
qSlicerDependentExtensionModuleWidget::qSlicerDependentExtensionModuleWidget(QWidget* _parent)
  : Superclass( _parent )
  , d_ptr( new qSlicerDependentExtensionModuleWidgetPrivate )
{
}

//-----------------------------------------------------------------------------
qSlicerDependentExtensionModuleWidget::~qSlicerDependentExtensionModuleWidget()
{
}

//-----------------------------------------------------------------------------
void qSlicerDependentExtensionModuleWidget::setup()
{
  Q_D(qSlicerDependentExtensionModuleWidget);
  d->setupUi(this);
  this->Superclass::setup();
}

