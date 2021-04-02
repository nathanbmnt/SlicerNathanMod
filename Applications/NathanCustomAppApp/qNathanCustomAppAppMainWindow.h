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

#ifndef __qNathanCustomAppAppMainWindow_h
#define __qNathanCustomAppAppMainWindow_h

// NathanCustomApp includes
#include "qNathanCustomAppAppExport.h"
class qNathanCustomAppAppMainWindowPrivate;

// Slicer includes
#include "qSlicerMainWindow.h"

class Q_NATHANCUSTOMAPP_APP_EXPORT qNathanCustomAppAppMainWindow : public qSlicerMainWindow
{
  Q_OBJECT
public:
  typedef qSlicerMainWindow Superclass;

  qNathanCustomAppAppMainWindow(QWidget *parent=0);
  virtual ~qNathanCustomAppAppMainWindow();

public slots:
  void on_HelpAboutNathanCustomAppAppAction_triggered();

protected:
  qNathanCustomAppAppMainWindow(qNathanCustomAppAppMainWindowPrivate* pimpl, QWidget* parent);

private:
  Q_DECLARE_PRIVATE(qNathanCustomAppAppMainWindow);
  Q_DISABLE_COPY(qNathanCustomAppAppMainWindow);
};

#endif
