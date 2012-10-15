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
#include "qSlicerIndependentExtensionModuleWidget.h"
#include "ui_qSlicerIndependentExtensionModule.h"

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_ExtensionTemplate
class qSlicerIndependentExtensionModuleWidgetPrivate: public Ui_qSlicerIndependentExtensionModule
{
public:
  qSlicerIndependentExtensionModuleWidgetPrivate();
};

//-----------------------------------------------------------------------------
// qSlicerIndependentExtensionModuleWidgetPrivate methods

//-----------------------------------------------------------------------------
qSlicerIndependentExtensionModuleWidgetPrivate::qSlicerIndependentExtensionModuleWidgetPrivate()
{
}

//-----------------------------------------------------------------------------
// qSlicerIndependentExtensionModuleWidget methods

//-----------------------------------------------------------------------------
qSlicerIndependentExtensionModuleWidget::qSlicerIndependentExtensionModuleWidget(QWidget* _parent)
  : Superclass( _parent )
  , d_ptr( new qSlicerIndependentExtensionModuleWidgetPrivate )
{
}

//-----------------------------------------------------------------------------
qSlicerIndependentExtensionModuleWidget::~qSlicerIndependentExtensionModuleWidget()
{
}

//-----------------------------------------------------------------------------
void qSlicerIndependentExtensionModuleWidget::setup()
{
  Q_D(qSlicerIndependentExtensionModuleWidget);
  d->setupUi(this);
  this->Superclass::setup();
}

