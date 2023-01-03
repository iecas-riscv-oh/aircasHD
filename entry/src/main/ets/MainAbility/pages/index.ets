import aircasHD from "libaircashd.so"
import router from '@ohos.router';

@Entry
@Component
struct Index {
  @State message: string = 'Hello AirCas'

  build() {
    Row() {
      Column() {
        Text(this.message)
          .fontSize(20)
          .fontWeight(FontWeight.Bold)
          .onClick(() => {
            //console.log("Test NAPI 2 + 3 = " + aircasHD.add(2, 3) +aircasHD.sendmessage());
            //router.push( {url:'pages/sendmessage'})
          })
        Button('sendmessage page')
          .margin(40)
          .fontSize(20)
          .width('50%')
          .onClick(() => {
            router.push( {url:'pages/sendmessage'})
          })
        Button('sendpicture page')
          .margin(40)
          .fontSize(20)
          .width('50%')
          .onClick(() => {
            router.push( {url:'pages/sendpicture'})
          })
        Button('videostream page')
          .margin(40)
          .fontSize(20)
          .width('50%')
          .onClick(() => {
            router.push( {url:'pages/videostream'})
          })
      }
        Button('controll page')
          .margin(40)
          .fontSize(20)
          .width('50%')
          .onClick(() => {
            router.push( {url:'pages/controlpage'})
          })
      .width('100%')
    }
    .height('100%')
  }
}
