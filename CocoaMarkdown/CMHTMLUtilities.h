//
//  CMHTMLUtilities.h
//  CocoaMarkdown
//
//  Created by Indragie on 1/16/15.
//  Copyright (c) 2015 Indragie Karunaratne. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN

NSString * CMTagNameFromHTMLTag(NSString *tag);
BOOL CMIsHTMLVoidTagName(NSString *name);
BOOL CMIsHTMLTag(NSString *tag);
BOOL CMIsHTMLClosingTag(NSString *tag);

NS_ASSUME_NONNULL_END
