// Copyright (C) 2019  Joseph Artsimovich <joseph.artsimovich@gmail.com>, 4lex4 <4lex49@zoho.com>
// Use of this source code is governed by the GNU GPLv3 license that can be found in the LICENSE file.

#ifndef SCANTAILOR_PAGE_LAYOUT_ORDERBYHEIGHTPROVIDER_H_
#define SCANTAILOR_PAGE_LAYOUT_ORDERBYHEIGHTPROVIDER_H_

#include <memory>

#include "PageOrderProvider.h"
#include "Settings.h"

namespace page_layout {
class OrderByHeightProvider : public PageOrderProvider {
 public:
  explicit OrderByHeightProvider(std::shared_ptr<Settings> settings);

  bool precedes(const PageId& lhsPage, bool lhsIncomplete, const PageId& rhsPage, bool rhsIncomplete) const override;

 private:
  std::shared_ptr<Settings> m_settings;
};
}  // namespace page_layout
#endif
