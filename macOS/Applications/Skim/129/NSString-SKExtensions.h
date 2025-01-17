//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (SKExtensions)
- (id)xmlString;
- (id)typeIcon;
- (id)smallIcon;
- (id)icon;
- (id)url;
- (id)parenthesizedStringIfNotEmpty;
- (id)stringByPrependingFullStopAndSpaceIfNotEmpty;
- (id)stringByPrependingCommaAndSpaceIfNotEmpty;
- (id)stringByAppendingFullStopAndSpaceIfNotEmpty;
- (id)stringByAppendingCommaAndSpaceIfNotEmpty;
- (id)stringByAppendingFullStopIfNotEmpty;
- (id)stringByAppendingCommaIfNotEmpty;
- (id)stringByPrependingSpaceIfNotEmpty;
- (id)stringByAppendingDoubleSpaceIfNotEmpty;
- (id)stringByAppendingSpaceIfNotEmpty;
- (id)stringBySurroundingWithSpacesIfNotEmpty;
- (double)pointY;
- (double)pointX;
- (double)rectHeight;
- (double)rectWidth;
- (double)rectY;
- (double)rectX;
- (id)midPointString;
- (id)sizeString;
- (id)originString;
- (id)pointString;
- (id)rectString;
- (id)typeName;
- (id)lossyStringUsingEncoding:(unsigned long long)arg1;
- (BOOL)isCaseInsensitiveEqual:(id)arg1;
- (long long)localizedCaseInsensitiveNumericCompare:(id)arg1;
- (id)stringByEscapingParenthesis;
- (id)stringByEscapingDoubleQuotes;
- (id)stringByEscapingShellChars;
- (id)stringByBackslashEscapingCharactersFromSet:(id)arg1;
- (id)stringByAppendingEllipsis;
- (id)stringByRemovingAliens;
- (id)stringByCollapsingWhitespaceAndNewlinesAndRemovingSurroundingWhitespaceAndNewlines;
- (long long)noteTypeCompare:(id)arg1;
- (id)noteTypeOrder;
- (id)templateStringValue;
- (BOOL)containsStringStartingAtWord:(id)arg1 options:(long long)arg2 range:(struct _NSRange)arg3;
@end

