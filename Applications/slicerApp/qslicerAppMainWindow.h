/*==============================================================================

  Copyright (c) Kitware, Inc.

  See http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  This file was originally developed by Julien Finet, Kitware, Inc.
  and was partially funded by NIH grant 3P41RR013218-12S1

==============================================================================*/

#ifndef __qslicerAppMainWindow_h
#define __qslicerAppMainWindow_h

// slicer includes
#include "qslicerAppExport.h"
class qslicerAppMainWindowPrivate;

// Slicer includes
#include "qSlicerMainWindow.h"

class Q_SLICER_APP_EXPORT qslicerAppMainWindow : public qSlicerMainWindow
{
  Q_OBJECT
public:
  typedef qSlicerMainWindow Superclass;

  qslicerAppMainWindow(QWidget *parent=0);
  virtual ~qslicerAppMainWindow();

public slots:
  void on_HelpAboutslicerAppAction_triggered();

protected:
  qslicerAppMainWindow(qslicerAppMainWindowPrivate* pimpl, QWidget* parent);

private:
  Q_DECLARE_PRIVATE(qslicerAppMainWindow);
  Q_DISABLE_COPY(qslicerAppMainWindow);
};

#endif
