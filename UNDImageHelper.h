//
//  UNDImageHelper.h
//  UNDHelpers
//
//  Created by 尓健 倪 on 2/07/2016.
//  Copyright © 2016 尓健 倪. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#pragma mark - ACKategories
#define COLOR_PART_RED(color)    (((color) >> 16) & 0xff)
#define COLOR_PART_GREEN(color)  (((color) >>  8) & 0xff)
#define COLOR_PART_BLUE(color)   ( (color)        & 0xff)

@interface UNDImageHelper : NSObject

/*!
 * @discussion This method get the Image from the URL string you input.
 * @param urlString The URL string where you are going to download Image from.
 * @return UIImage The Image we retrived from this url..
 */
+ (UIImage *)getImageFromURLString:(NSString *)urlString;

#pragma mark - ACKategories
+ (UIImage*)setBackgroundImageByColor:(UIColor *)backgroundColor withFrame:(CGRect )rect;
+ (UIImage*) replaceColor:(UIColor*)color inImage:(UIImage*)image withTolerance:(float)tolerance;
+ (UIImage *)changeWhiteColorTransparent: (UIImage *)image;
+ (UIImage *)changeColorTo:(NSMutableArray*) array Transparent: (UIImage *)image;
+ (UIImage *)imageWithImage:(UIImage *)image scaledToSize:(CGSize)newSize;
+ (UIImage *)getImageByRemovingColor:(uint)color fromImage:(UIImage *)orignalImage;
+ (UIImage *)getImageByRemovingColorsWithMinColor:(uint)minColor maxColor:(uint)maxColor fromImage:(UIImage *)orignalImage;
+ (UIImage *)getImageByReplacingColor:(UIColor *)color withColor:(UIColor *)newColor fromImage:(UIImage *)orignalImage;
+ (UIImage *)getImageByReplacingColorsWithMinColor:(UIColor *)minColor maxColor:(UIColor *)maxColor withColor:(UIColor *)newColor fromImage:(UIImage *)orignalImage;
+ (UIImage *)getImageByReplacingColorsWithMinColor:(NSUInteger)minColor maxColor:(NSUInteger)maxColor withColor:(NSUInteger)newColor andAlpha:(float)alpha fromImage:(UIImage *)orignalImage;
+ (UIImage*) imageWithColor:(UIColor*) color;

+(UIImage *) changeColorForImage:(UIImage *)image toColor:(UIColor*)color;


+ (UIImage *)anotherGetImageByReplacingColorsWithMinColor:(NSUInteger)minColor maxColor:(NSUInteger)maxColor withColor:(NSUInteger)newColor andAlpha:(float)alpha fromImage:(UIImage *)orignalImage;
@end
