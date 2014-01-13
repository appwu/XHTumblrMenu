//
//  XHTumblrMenuHeader.h
//  XHTumblrMenu
//
//  Created by 曾 宪华 on 14-1-13.
//  Copyright (c) 2014年 曾宪华 开发团队(http://iyilunba.com ) 本人QQ:543413507 本人QQ群（142557668）. All rights reserved.
//

#ifndef XHTumblrMenu_XHTumblrMenuHeader_h
#define XHTumblrMenu_XHTumblrMenuHeader_h

#define XHTumblrMenuViewTag 1999
#define XHTumblrMenuViewImageHeight 90
#define XHTumblrMenuViewTitleHeight 20
#define XHTumblrMenuViewVerticalPadding 10
#define XHTumblrMenuViewHorizontalMargin 10
#define XHTumblrMenuViewRriseAnimationID @"XHTumblrMenuViewRriseAnimationID"
#define CHTumblrMenuViewDismissAnimationID @"XHTumblrMenuViewDismissAnimationID"
#define XHTumblrMenuViewAnimationTime 0.36
#define XHTumblrMenuViewAnimationInterval (XHTumblrMenuViewAnimationTime / 5)

#define XHTumblrBlue [UIColor colorWithRed:45/255.0f green:68/255.0f blue:94/255.0f alpha:1.0]


@class XHTumblrMenu;
@class XHTumblrMenuItem;

typedef void (^XHTumblrMenuViewSelectedBlock)(XHTumblrMenu *tumblrMenu, XHTumblrMenuItem *tumblrMenuItem);

#endif
