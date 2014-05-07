//
//  TQRichTextPhoneRun.h
//  TQRichTextViewDemo
//
//  Created by apple on 14-4-25.
//  Copyright (c) 2014年 fuqiang. All rights reserved.
//

#import "TQRichTextBaseRun.h"

@interface TQRichTextPhoneRun : TQRichTextBaseRun
+ (NSString *)analyzeText:(NSString *)string runsArray:(NSMutableArray **)array;

@end
